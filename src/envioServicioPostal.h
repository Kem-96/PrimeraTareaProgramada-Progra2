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
    int tipoClase;

    public:

    EnvioServicioPostal(int clase, int peso, float kilometros);

    ~EnvioServicioPostal();

    float CalculoEnvio();

    float ObtenerCantKilometros();

    int ObtenerPesoPaquete();
    
    int ObtenerTipoClaseEnvio();
    
};


#endif