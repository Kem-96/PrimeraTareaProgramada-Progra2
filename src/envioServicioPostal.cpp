#include "envioServicioPostal.h"

EnvioServicioPostal::EnvioServicioPostal(int clase, int peso, float kilometros){
    this->tipoClase = clase;
    this->cantKilometros = kilometros;
    this->pesoEnvio = peso;

}

//EnvioServicioPostal::~EnvioServicioPostal(){

//}

float EnvioServicioPostal::CalculoEnvio(){
    float montoEnvio;
    if(this->tipoClase == primeraClase){
        if(this->pesoEnvio>=0 & this->pesoEnvio<=3){
            montoEnvio = 0.300 * this->cantKilometros;
        }
        else if(this->pesoEnvio>=4 & this->pesoEnvio<=8){
            montoEnvio = 0.450 * this->cantKilometros;
        }
        else if(this->pesoEnvio>=9){
            montoEnvio = 0.600 * this->cantKilometros;
        }
        
    }
    else if(this->tipoClase == segundaClase){
        if(this->pesoEnvio>=0 & this->pesoEnvio<=3){
            montoEnvio = 0.0280 * this->cantKilometros;
        }
        else if(this->pesoEnvio>=4 & this->pesoEnvio<=8){
            montoEnvio = 0.0530 * this->cantKilometros;
        }
        else if(this->pesoEnvio>=9){
            montoEnvio = 0.0750 * this->cantKilometros;
        }
    }
    else if (this->tipoClase == terceraClase)
    {
        montoEnvio = 0.0120 * this->cantKilometros;
    }
    
    return montoEnvio;
}

float EnvioServicioPostal::ObtenerCantKilometros(){
    return this->cantKilometros;
}

float EnvioServicioPostal::ObtenerPesoPaquete(){
    return this->pesoEnvio;
}

int EnvioServicioPostal::ObtenerTipoClaseEnvio(){
    return tipoClase;
}