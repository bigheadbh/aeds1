#include<math.h>
#include "figura.h"

Figura::Figura(){
    this->cor = "nenhuma";
    this->preenchida = false;
}

Figura::Figura(string cor, bool preenchida){
    this->cor = cor;
    this->preenchida = preenchida;
}

Circulo::Circulo():Figura(){
    raio = 0;
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
    return M_PI * pow(raio,2);
}

float Circulo::getPerimetro(){
    return 2 * M_PI * raio;
}

Quadrado::Quadrado():Figura(){
    this->lado = 0;
}

Quadrado::Quadrado(float lado,string cor, bool preenchida):Figura(cor, preenchida){
    this->lado = lado;
}

void Quadrado::setLado(float lado){
    this->lado = lado;
}

float Quadrado::getLado(){
    return this->lado;
}

float Quadrado::getArea(){
    return lado * lado;
}

float Quadrado::getPerimetro(){
    return 4 * lado;
}

Retangulo::Retangulo():Figura(){
    this->altura = 0;
    this->base = 0;
}

Retangulo::Retangulo(float altura, float base, string cor, bool preenchida):Figura(cor, preenchida){
    this->altura = altura;
    this->base = base;
}

void Retangulo::setBase(float base){
    this->base = base;
}

float Retangulo::getBase(){
    return this->base;
}

void Retangulo::setAltura(float altura){
    this->altura = altura;
}

float Retangulo::getAltura(){
    return this->altura;
}   

float Retangulo::getArea(){
    return base * altura;
}

float Retangulo::getPerimetro(){
    return 2*(base + altura);
}