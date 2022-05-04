#include "envioServicioPostal.h"

EnvioServicioPostal::EnvioServicioPostal(int clase, int peso, float kilometros){
    this->tipoClase = clase;
    this->cantKilometros = kilometros;
    this->pesoPaquete = peso;

}

EnvioServicioPostal::~EnvioServicioPostal(){

}

float EnvioServicioPostal::CalculoEnvio(){
    float montoEnvio;
    if(this->tipoClase == primeraClase){
        if(this->pesoPaquete>=0 & this->pesoPaquete<=3){
            montoEnvio = 0.300 * this->cantKilometros;
        }
        else if(this->pesoPaquete>=4 & this->pesoPaquete<=8){
            montoEnvio = 0.450 * this->cantKilometros;
        }
        else if(this->pesoPaquete>=9){
            montoEnvio = 0.600 * this->cantKilometros;
        }
        
    }
    if(this->tipoClase == segundaClase){
        if(this->pesoPaquete>=0 & this->pesoPaquete<=3){
            montoEnvio = 0.0280 * this->cantKilometros;
        }
        else if(this->pesoPaquete>=4 & this->pesoPaquete<=8){
            montoEnvio = 0.0530 * this->cantKilometros;
        }
        else if(this->pesoPaquete>=9){
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

int EnvioServicioPostal::ObtenerPesoPaquete(){
    return this->pesoPaquete;
}

int EnvioServicioPostal::ObtenerTipoClaseEnvio(){
    return tipoClase;
}