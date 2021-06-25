#include "elevador.h"

Elevador::Elevador(){
    this->andarAtual = 0;
    this->lotacao = 0;
    this->capacidade = 0;
    this->totalAndares = 0;
}

Elevador::Elevador(int andarAtual, int lotacao, int capacidade, int totalAndares){
    this->andarAtual = andarAtual;
    this->lotacao = lotacao;
    this->capacidade = capacidade;
    this->totalAndares = totalAndares;
}

void Elevador::inicializa(int capacidade, int totalAndares){
    this->andarAtual = TERREO;
    this->lotacao = VAZIO;
    this->capacidade = capacidade;
    this->totalAndares = totalAndares;
}

bool Elevador::entra(){
    bool resp = false;
    if(lotacao + 1 <= capacidade){
        lotacao ++;
        resp = true;
    }
    return resp;
}

bool Elevador::sai(){
    bool resp = false;
    if (lotacao >= 1){
        lotacao--;
        resp = true;
    }
    return resp;
}

bool Elevador::sobe(){
    bool resp = false;
    if (andarAtual + 1 <= totalAndares){
        andarAtual++;
        resp = true;
    }
    return resp;
}

bool Elevador::desce(){
    bool resp = false;
    if (andarAtual-1 >= TERREO){
        andarAtual--;
        resp = true;
    }
    return resp;
}

void Elevador::mostrar(){
    cout << "Andar Atual: " << andarAtual << endl;
    cout << "Lotacao: " << lotacao << endl;
    cout << "Capacidade: " << capacidade << endl;
    cout << "Total Andares: " << totalAndares << endl;
}

string Elevador::toString(){
    string resp = "";
    resp = "Andar Atual: " + andarAtual;
    resp += " Lotacao: " + lotacao;
    resp += " Capacidade: " + capacidade;
    resp += " Total Andares: " + totalAndares;
    return resp;
}

void Elevador::setAndarAtual(int andarAtual){
    this->andarAtual = andarAtual;
}

void Elevador::setTotalAndares(int totalAndares){
    this->totalAndares = totalAndares;
}

void Elevador::setCapacidade(int capacidade){
    this->capacidade = capacidade;
}

void Elevador::setLotacao(int lotacao){
    this->lotacao = lotacao;
}

int Elevador::getAndarAtual(){
    return andarAtual;
}

int Elevador::getTotalAndares(){
    return totalAndares;
}

int Elevador::getCapacidade(){
    return capacidade;
}

int Elevador::getLotacao(){
    return lotacao;
}

