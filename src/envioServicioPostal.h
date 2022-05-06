#ifndef ENVIOSERVICIOPOSTAL_H
#define ENVIOSERVICIOPOSTAL_H

#include "envio.h"
#include <string>

using namespace std;

class EnvioServicioPostal : public Envio{

    // Privado

    protected:

    enum tipoClase {primeraClase, segundaClase, terceraClase};
    float cantKilometros;
    int pesoEnvio;
    int tipoClase;

    public:

    EnvioServicioPostal(int clase, int peso, float kilometros);

    //~EnvioServicioPostal();

    virtual float CalculoEnvio();

    virtual float ObtenerCantKilometros();

    virtual float ObtenerPesoPaquete();
    
    int ObtenerTipoClaseEnvio();
    
};


#endif