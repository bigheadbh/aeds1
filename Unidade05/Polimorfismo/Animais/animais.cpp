#include "animais.h"

Vaca::Vaca():Animal("vaca"){
    this->printNome();
}

void Vaca::emitirSom(){
    system("say muuuuuuuuuu");
}

Cachorro::Cachorro():Animal("cachorro"){
    this->printNome();
}

void Cachorro::emitirSom(){
    system("say auauauauau auau");
}