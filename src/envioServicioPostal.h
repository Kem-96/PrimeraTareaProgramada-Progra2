#ifndef ENVIOSERVICIOPOSTAL_H
#define ENVIOSERVICIOPOSTAL_H

#include <string>

using namespace std;

class EnvioServicioPostal {

    // Privado

    protected:

    enum tipoClase {primeraClase, segundaClase, terceraClase};
    float cantKilometros;
    int pesoPaquete;

    public:
    
    ~EnvioServicioPostal();

    float CalculoEnvioServicioPostal(int clase, int peso, float kilometros);

    float ObtenerCantKilometros();

    int ObtenerPesoPaquete();
    
};


#endif