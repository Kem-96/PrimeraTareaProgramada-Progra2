
FLAGS = -g -c --std=c++17


all:

	mkdir -p bin
	g++ $(FLAGS) src/envio.cpp -o bin/envio.o
	g++ $(FLAGS) src/envioFedex.cpp -o bin/envioFedex.o
	g++ $(FLAGS) src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/PrimeraTareaProgramada-Progra2 bin/envioFedex.o bin/envioServicioPostal.o bin/envio.o bin/main.o 	
	
version_debug:

	g++ -g 

version_release:
	mkdir -p bin
	g++ -c --std=c++17 src/envio.cpp -o bin/envio.o
	g++ -c --std=c++17 src/envioFedex.cpp -o bin/envioFedex.o
	g++ -c --std=c++17 src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ -c --std=c++17 src/main.cpp -o bin/main.o
	g++ -o bin/PrimeraTareaProgramada-Progra2 bin/envio.o bin/envioFedex.o bin/envioServicioPostal.o bin/main.o

test:
	mkdir -p bin
	g++ $(FLAGS) tests/envioFedex_tests.cpp -o bin/envioFedex_tests.o
	g++ $(FLAGS) src/envioFedex.cpp -o bin/envioFedex.o
	g++ $(FLAGS) tests/envioServicioPostal_tests.cpp -o bin/envioServicioPostal_tests.o
	g++ $(FLAGS) src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ -g -o bin/tests bin/envioFedex_tests.o bin/envioFedex.o bin/envioServicioPostal_tests.o bin/envioServicioPostal.o -lgtest -lgtest_main -lpthread 
	

clean:
	rm -Rf bin
