#include "relogio.h"

Relogio::Relogio(){
    this->hora = 0;
    this->minuto = 0;
    this->segundo = 0;
}

Relogio::Relogio(int hora, int minuto, int segundo){
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

void Relogio::setHora(int hora, int minuto, int segundo){
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

void Relogio::getHora(int *hora, int *minuto, int *segundo){
    *hora = this->hora;
    *minuto = this->minuto;
    *segundo = this->segundo;
}

void Relogio::avancaHora(){
    this->segundo++;
    if(this->segundo >= 60){
        this->segundo = 0;
        this->minuto++;
    }
    if(this->minuto >= 60){
        this->minuto = 0;
        this->hora++;
    }
    if(this->hora >= 24){
        this->hora = 0;
    }
}

