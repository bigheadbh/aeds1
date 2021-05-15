#include "pessoa.h"

Pessoa::Pessoa(){
    this->nome = "";
    this->email = "";
}

Pessoa::Pessoa(string nome, string email){
    this->nome = nome;
    this->email = email;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

string Pessoa::getNome(){
    return nome;
}

void Pessoa::setEmail(string email){
    this->email = email;
}

string Pessoa::getEmail(){
    return email;
}