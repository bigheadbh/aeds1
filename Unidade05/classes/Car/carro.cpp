#include "carro.h"

Carro::Carro(){
    this->distancia = 0;
    this->tanque = 0;
}

Carro::Carro(float tanque, int distancia){
    this->distancia = distancia;
    this->tanque = tanque;
}

void Carro::abastecer(float litros){
    if(this->tanque + litros <= 50){
        this->tanque += litros;
    }
}

void Carro::mover(int km){
    float litros = km/15;
    this->distancia += km;
    this->tanque -= litros;
}

void Carro::getStatus(){
    cout << "Distância percorrida: " << this->distancia << "km\t" << "Combustível restante no tanque: " << this->tanque << "L" << endl;
}