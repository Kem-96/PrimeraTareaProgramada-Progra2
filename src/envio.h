#ifndef TIPOENVIO_H
#define TIPOENVIO_H

#include <string>

using namespace std;

class TipoEnvio {

    // Privado

    protected:
    string tipoEnvio;

    public:
    virtual float CalculoEnvio() = 0;

    virtual string ObtenerTipoEnvio();

    
};


#endif