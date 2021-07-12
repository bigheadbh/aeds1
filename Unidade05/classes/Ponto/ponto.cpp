#include<iostream>
#include<math.h>
#include"ponto.h"

using namespace std;

Ponto::Ponto(){
    x = 5.3;
    y = 4.7;
}

Ponto:: Ponto(float x, float y){
    this->x = x;
    this->y = y;
}

void Ponto::setX(float x){ this->x = x; }

void Ponto::setY(float y){ this->y = y; }

float Ponto::getX(){ return this->x; }

float Ponto::getY(){ return this->y; }

void Ponto::mostrar(){
    cout << "x(" << this->x << ")\ty(" << this->y << ")" << endl;
}

bool Ponto::equals(Ponto p){
    bool resp = false;
    if(this->x == p.x && this->y == p.y){
        resp = true;
    }
    return resp;
}

bool Ponto::operator==(Ponto &p){
    bool resp = false;
    if(this->x == p.x && this->y == p.y){
        resp = true;
    }
    return resp;
}

bool Ponto::operator!=(Ponto &p){
    bool resp = false;
    if(this->x != p.x || this->y != p.y){
        resp = true;
    }
    return resp;
}

Ponto Ponto::operator+(Ponto &p){
    Ponto resp;
    resp.x = this->x + p.x;
    resp.y = this->y + p.y;
    return resp;
}

Ponto Ponto::operator-(Ponto &p){
    Ponto resp;
    resp.x = this->x - p.x;
    resp.y = this->y - p.y;
    return resp;
}

float Ponto::getDistancia(Ponto p){
    float resp;
    resp = sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
    return resp;
}