#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include <string>

using namespace std;

class EnvioFedex {

    // Privado
    

    protected:
    
    const int costoBase = 35; 
    int cantKilometros;
    int pesoEnvio;
    float costoEnvio;

    public:

    EnvioFedex(int km, int peso);
    
    virtual ~EnvioFedex();

    float CalculoEnvio(int km, int peso);

    float ObtenerCantKilometros();

    float ObtenerPeso();
};


#endif