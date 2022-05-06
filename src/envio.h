#ifndef ENVIO_H
#define ENVIO_H

#include <string>

using namespace std;

class Envio {

    // Privado

    protected:
    
    string nombre;

    public:
    ~Envio();
    virtual float CalculoEnvio()=0;

    virtual float ObtenerCantKilometros()=0;

    virtual float ObtenerPesoPaquete()=0;
    string ObtenerNombre();
};


#endif