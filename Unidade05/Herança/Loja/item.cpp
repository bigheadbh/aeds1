#include<iostream>
#include"item.h"

using namespace std;

Item::Item(){
    this->nome = "";
    this->preco = 0;
}

Item::Item(string nome, float preco){
    this->nome = nome;
    this->preco = preco;
}

string Item::getNome(){
    return this->nome;
}

float Item::getPreco(){
    return this->preco;
}

void Item::setNome(string nome){
    this->nome = nome;
}

void Item::setPreco(float preco){
    this->preco = preco;
}

string Item::toString(){
    string resp = "";
    resp += "nome: " + nome + "\t";
    resp += "preco: R$ " + to_string(preco) + "\t";
    return resp;
}

Livro::Livro():Item(){
    this->autor = "";
}

Livro::Livro(string nome, float preco, string autor):Item(nome, preco){
    this->autor = autor;
}

string Livro::getAutor(){
    return this->autor;
}

void Livro::setAutor(string autor){
    this->autor = autor;
}

string Livro::toString(){
    string resp = Item::toString();
    resp += "autor: " + autor;
    return resp;
}

CD::CD():Item(){
    this->numfaixas = 0;
}

CD::CD(string nome, float preco, int numfaixas):Item(nome, preco){
    this->numfaixas = numfaixas;
}

int CD::getNumFaixas(){
    return this->numfaixas;
}

void CD::setNumFaixas(int numfaixas){
    this->numfaixas = numfaixas;
}

string CD::toString(){
    string resp = Item::toString();
    resp += "no. faixas: " + to_string(numfaixas);
    return resp;
}

DVD::DVD():Item(){
    this->duracao = 0;
}

DVD::DVD(string nome, float preco, float duracao):Item(nome, preco){
    this->duracao = duracao;
}

float DVD::getDuracao(){
    return this->duracao;
}

void DVD::setDuracao(float duracao){
    this->duracao = duracao;
}

string DVD::toString(){
    string resp = Item::toString();
    resp += "duracao: " + to_string(duracao);
    return resp;
}
