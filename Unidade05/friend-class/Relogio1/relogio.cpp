#include <iostream>
#include "relogio.h"

Relogio::Relogio(){
    this->hora = 0;
    this->minutos = 0;
    this->segundos = 0;
}
Relogio::Relogio(int hora, int segundos, int minutos){
    this->hora = hora;
    this->minutos = minutos;
    this->segundos = segundos;
}