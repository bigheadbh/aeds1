#include "voo.h"

Voo::Voo(string id, Data data, short capacidade){
    this->id = id;
    this->data = data;
    this->capacidade = capacidade;
    this->ocupacao = 0;
    lugares = (bool *) malloc(sizeof(bool)*capacidade);
}

short Voo::proximoLivre(){
    short posicao = -1;
    for(int i = 0; i < capacidade; i++){
        if(lugares[i] == false){
            posicao = i;
            i = capacidade;
        }
    }
    return posicao;
}

bool Voo::verifica(short posicao){
    return (lugares[posicao]);
}

bool Voo::ocupa(short posicao){
    bool resp = false;
    if(lugares[posicao] == false){
        lugares[posicao] = true;
        resp = true;
    }
    return resp;
}

short Voo::getVagas(){
    return capacidade - ocupacao;
}

string Voo::getId(){
    return id;
}

Data Voo::getData(){
    return data;
}