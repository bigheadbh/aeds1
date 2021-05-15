#include"empresa.h"

Empresa::Empresa(){
    nome = "";
    endereco = "";
    cidade = "";
    estado = "";
    cep = "";
    telefone = "";
}

Empresa::Empresa(string nome, string endereco, string cidade, string estado, string cep, string telefone){
    this->nome = nome;
    this->endereco = endereco;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
    this->telefone = telefone;
}

string Empresa::getNome(){
    return nome;
}

string Empresa::getEndereco(){
    return endereco;
}

string Empresa::getCidade(){
    return cidade;
}

string Empresa::getEstado(){
    return estado;
}

string Empresa::getCep(){
    return cep;
}

string Empresa::getTelefone(){
    return telefone;
}

void Empresa::setNome(string nome){
    this->nome = nome;
}

void Empresa::setEndereco(string endereco){
    this->endereco = endereco;
}

void Empresa::setCidade(string cidade){
    this->cidade = cidade;
}

void Empresa::setEstado(string estado){
    this->estado = estado;
}

void Empresa::setCep(string cep){
    this->cep = cep;
}

void Empresa::setTelefone(string telefone){
    this->telefone = telefone;
}

void Empresa::print(){
    cout << "Nome: " << nome << endl;
    cout << "Endereço: " << endereco << endl;
    cout << "Cidade: " << cidade << endl;
    cout << "Estado: " << estado << endl;
    cout << "CEP: " << cep << endl;
    cout << "Telefone: " << telefone << endl;
}
