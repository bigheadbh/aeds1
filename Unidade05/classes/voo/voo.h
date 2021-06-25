#ifndef VOO_H 
#define VOO_H

#include<iostream>
#include"../aula2711/data.h"

using namespace std;


class Voo {

    private:
        string id;
        Data data;
        short capacidade;
        short ocupacao;
        bool *lugares;

    public:
        Voo(string id, Data data, short capacidade);
        short proximoLivre();
        bool verifica(short posicao);
        bool ocupa(short posicao);
        short getVagas();
        string getId();
        Data getData();
        //clone 
}

#endif