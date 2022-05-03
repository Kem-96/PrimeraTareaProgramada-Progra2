#include "envioFedex.h"



EnvioFedex::~EnvioFedex(){

}

//Costo base = 35.00
//Si distancia > 500 km, entonces costo = costo + 15.00
//Si peso > 10kg entonces costo = costo + 10.00
float EnvioFedex::CalculoEnvioFedex(int cantKilometros, int pesoEnvio){
    
    float costoEnvio = 0;
    if(cantKilometros > 500){
        costoEnvio = costoBase + 15.00;
    }
    if(pesoEnvio> 10){
        costoEnvio = costoBase + 10.00;
    }
    return costoEnvio;
}

float EnvioFedex::ObtenerCantKilometros(){
    return cantKilometros;
}

float EnvioFedex::ObtenerPeso(){
    return pesoEnvio;
}

