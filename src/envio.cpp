#include "envio.h"


Envio::~Envio(){
    
}

string Envio::ObtenerNombre() {
    return "Nombre del empleado: " + this->nombre;
}

