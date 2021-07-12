#ifndef LOJA_H
#define LOJA_H
#include<iostream>
#include"item.h"
using namespace std;

class Loja{
    protected:
        Item *itens[5];
        int count;
    public: 
        Loja();
        int getCount();
        void addItem();
        void showItens();
};
#endif
