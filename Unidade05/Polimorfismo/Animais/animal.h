#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal{
    private:
        string nome;

    public:
        Animal();
        Animal(string nome);
        //virtual void emitirSom();//torna a funcao virtual, ou seja, todos que herdarem animal deverão implementar a função.
        virtual void emitirSom() = 0; // o =0 isenta a classe Animal de implementar a função
        //void emitirSom();
        void printNome();
};

#endif