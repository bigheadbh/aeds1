#include "carro.h"

Carro::Carro(){
    this->distancia = 0;
    this->tanque = 0;
}

Carro::~Carro(){
    cout<<"Final!!!"<<endl;
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

void Carro::mover(int quilometros){
    float litros = quilometros/15.0;
    this->distancia += quilometros;
    this->tanque -= litros;
}

void Carro::getStatus(){
    cout <<"Distancia: "<<this->distancia<<"\t";
    cout <<"Status do tanque: "<<this->tanque<<endl;
}