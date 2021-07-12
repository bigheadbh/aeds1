#ifndef MENSAGEM_H
#define MENSAGEM_H

#include "relogio.h"

using namespace std;

class Mensagem{
    private: 
        string msg;
    public:
        Mensagem();
        void imprimir(Relogio);
};

#endif