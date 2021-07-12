#ifndef PESSOA_H
#define PESSOA_H

#include<iostream>
#include<time.h>
#include"data.h"
using namespace std;

class Pessoa{
    private:
        string nome;
        float altura;
        Data *dataNascimento;
    public:
        Pessoa();
        ~Pessoa();
        void setNome(string);
        void setAltura(float);
        void setDataNascimento(Data *);
        string getNome();
        float getAltura();
        Data *getDataNascimento();
        string toString();
};

#endif