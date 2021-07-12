#include"Pessoa.h"

Pessoa::Pessoa(){
    this->nome = "";
    this->altura = 0.0;
    this->dataNascimento = new Data();
}

Pessoa::~Pessoa(){
#ifdef DEBUG
    cout<<"Memoria desalocada..."<<endl;
#endif // DEBUG
    delete dataNascimento;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setAltura(float altura){
    this->altura = altura;
}

void Pessoa::setDataNascimento(Data *dataNascimento){
    this->dataNascimento = dataNascimento;
}

string Pessoa::getNome(){
    return this->nome;
}

float Pessoa::getAltura(){
    return this->altura;
}

Data *Pessoa::getDataNascimento(){
    return dataNascimento->clone();
}

string Pessoa::toString(){
    string resp = nome + "," + to_string(altura) + "," + dataNascimento->toString();
#ifdef DEBUG
    cout<<"Pessoa::toString()" <<endl;
    cout<< resp <<endl;
#endif // DEBUG
    return resp;
}

