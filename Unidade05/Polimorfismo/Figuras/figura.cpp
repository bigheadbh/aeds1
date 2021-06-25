#include <math.h>
#include "figura.h"
using namespace std;

Figura::Figura(){
    this->cor = "nenhuma";
    this->preenchida = false;
}

Figura::Figura(string cor, bool preenchida){
    this->cor = cor;
    this->preenchida = preenchida;
}


Circulo::Circulo():Figura(){
    this->cor = "nenhuma";
    this->preenchida = false;
}

Circulo::Circulo(float raio, string cor, bool preenchida):Figura(cor, preenchida){
    this->raio = raio;
}

void Circulo::setRaio(float raio){
    this->raio = raio;
}

float Circulo::getRaio(){
    return this->raio;
}

float Circulo::getArea(){
    return M_PI * pow(this->raio, 2);
}

float Circulo::getPerimetro(){
    return 2 * M_PI * this->raio;
}


Quadrado::Quadrado():Figura(){
    this->lado = 0;
}

Quadrado::Quadrado(float lado, string cor, bool preenchida):Figura(cor, preenchida){
    this->lado = lado;
}

void Quadrado::setLado(float lado){
    this->lado = lado;
}

float Quadrado::getLado(){
    return this->lado;
}

float Quadrado::getArea(){
    return pow(lado, 2);
}

float Quadrado::getPerimetro(){
    return 4 * lado;
}


Retangulo::Retangulo():Figura(){
    this->base = 0;
    this->altura = 0;
}

Retangulo::Retangulo(float base, float altura, string cor, bool preenchida):Figura(cor, preenchida){
    this->base = base;
    this->altura = altura;
}

void Retangulo::setBase(float base){
    this->base = base;
}

void Retangulo::setAltura(float altura){
    this->altura = altura;
}

float Retangulo::getBase(){
    return this->base;
}

float Retangulo::getAltura(){
    return this->altura;
}

float Retangulo::getArea(){
    return base * altura;
}

float Retangulo::getPerimetro(){
    return 2 * (base + altura);
}