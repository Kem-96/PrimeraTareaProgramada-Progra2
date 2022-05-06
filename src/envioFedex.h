#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "envio.h"
#include <string>

using namespace std;

class EnvioFedex : public Envio { 

    // Privado
    

    protected:
    
    const int costoBase = 35; 
    float cantKilometros;
    float pesoEnvio;
    float costoEnvio;

    public:

    EnvioFedex(float km, float peso);
    
    ~EnvioFedex();

    virtual float CalculoEnvio();

    virtual float ObtenerCantKilometros();

    virtual float ObtenerPesoPaquete();
};


#endif