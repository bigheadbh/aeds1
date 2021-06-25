#ifndef ANIMAIS_H
#define ANIMAIS_H

#include "animal.h"
#include <iostream>
using namespace std;

class Vaca:public Animal{
    public:
        Vaca();
        void emitirSom();
};

class Cachorro:public Animal{
    public:
        Cachorro();
        void emitirSom();
};



#endif