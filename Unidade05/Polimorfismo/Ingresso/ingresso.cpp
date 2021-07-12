#include "ingresso.h"

Ingresso::Ingresso(){
    this->valor = 0;
}

Ingresso::Ingresso(float valor){
    this->valor = valor;
}

void Ingresso::imprimeValor(){
    cout<<"O valor do ingresso: R$ "<<this->valor <<endl;
}

void Ingresso::setValor(float valor){
    this->valor = valor;
}

float Ingresso::getValor(){
    return this->valor;
}

IngressoVip::IngressoVip():Ingresso(0){
    this->valorAdicional = 0;
}

IngressoVip::IngressoVip(float valor, float valorAdicional):Ingresso(valor){
    this->valorAdicional = valorAdicional;
}

void IngressoVip::imprimeValor(){
    cout<<"O valor do ingresso: R$ "<<this->valor + this->valorAdicional<<endl;
}

IngressoNormal::IngressoNormal(){
    this->valor = 0;
}

IngressoNormal::IngressoNormal(float valor){
    this->valor = valor;
}

void IngressoNormal::imprimeValor(){
    Ingresso::imprimeValor();
}

CamaroteInferior::CamaroteInferior(){
    this->valor = 0;
    this->valorAdicional = 0;
    this->localizacao = "";
}

CamaroteInferior::CamaroteInferior(string localizacao, float valor, float valorAdicional){
    this->localizacao = localizacao;
    this->valor = valor;
    this->valorAdicional = valorAdicional; 
}

void CamaroteInferior::setLocalizcao(string localizacao){
    this->localizacao = localizacao;
}

string CamaroteInferior::getLocalizacao(){
    return this->localizacao;
}

void CamaroteInferior::imprimeValor(){
    cout << "O valor do ingresso: R$ "<< this->valor + this->valorAdicional<< endl;
    cout << "Localizacao: " << this->localizacao << endl;
}