#ifndef ANIMAIS_H
#define ANIMAIS_H

#include "animal.h"

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

class Viralata:public Cachorro{
    public:
        Viralata();
        void emitirSom();
};

#endif