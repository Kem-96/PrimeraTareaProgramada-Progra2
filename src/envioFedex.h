#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include <string>

using namespace std;

class EnvioFedex {

    // Privado
    

    protected:
    
    const int costoBase = 35; 
    float cantKilometros;
    float pesoEnvio;
    //float costoEnvio;

    public:

    EnvioFedex(float km, float peso);
    
    virtual ~EnvioFedex();

    float CalculoEnvioFedex();

    virtual float ObtenerCantKilometros();

    virtual float ObtenerPeso();
};


#endif