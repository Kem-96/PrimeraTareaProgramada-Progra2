#include "envio.h" 
#include "envioFedex.h"
#include "envioServicioPostal.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
    
    vector<Envio *> envios; 

    EnvioFedex* envio1 = new EnvioFedex(550.00, 3.00);
    std::cout << "El monto del envio1 " << envio1->CalculoEnvio() << std::endl;
    envios.push_back(envio1);

    EnvioServicioPostal* envio2 = new EnvioServicioPostal(0, 2, 30.00);
    std::cout << "El monto del envio2 " << envio2->CalculoEnvio() << std::endl;
    envios.push_back(envio2);
    
    EnvioServicioPostal* envio3 = new EnvioServicioPostal(1, 5, 90.00);
    std::cout << "El monto del envio3 " << envio3->CalculoEnvio() << std::endl;
    envios.push_back(envio3);

    EnvioServicioPostal* envio4 = new EnvioServicioPostal(2, 7, 80.00);
    std::cout << "El monto del envio4 " << envio4->CalculoEnvio() << std::endl;
    envios.push_back(envio4);

    double totalMontoEnvios = 0;
    for (Envio* envio : envios)
    {
        totalMontoEnvios += envio->CalculoEnvio();
    }
    std::cout << "El monto total de los envíos es de " << totalMontoEnvios << std::endl;

    delete envio1;
    delete envio2;
    delete envio3;
    delete envio4;
        
}






    