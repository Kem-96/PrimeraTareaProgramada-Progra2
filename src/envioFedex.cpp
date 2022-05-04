#include "envioFedex.h"

EnvioFedex::EnvioFedex(float km, float peso){
    this->cantKilometros = km;
    this->pesoEnvio = peso;
}

EnvioFedex::~EnvioFedex(){

}

//Costo base = 35.00
//Si distancia > 500 km, entonces costo = costo + 15.00
//Si peso > 10kg entonces costo = costo + 10.00
float EnvioFedex::CalculoEnvioFedex(){
    
    float costoEnvio = 0;
    if(this->cantKilometros > 500){
        costoEnvio = this->costoBase + 15.00;
    }
    if(this->pesoEnvio> 10){
        costoEnvio = this->costoBase + 10.00;
    }
    return costoEnvio;
}

float EnvioFedex::ObtenerCantKilometros(){
    return cantKilometros;
}

float EnvioFedex::ObtenerPeso(){
    return pesoEnvio;
}

