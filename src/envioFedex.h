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

    public:

    
    
    virtual ~EnvioFedex();

    float CalculoEnvioFedex(int km, int peso);

    float ObtenerCantKilometros();

    float ObtenerPeso();
};


#endif