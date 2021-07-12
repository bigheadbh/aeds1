#include"animais.h"

Vaca::Vaca():Animal("Vaca"){
    this->printNome();
}

void Vaca::emitirSom(){
    cout<<"Múúúúúúú"<<endl;
}

Cachorro::Cachorro():Animal("Cachorro"){
    this->printNome();
}

void Cachorro::emitirSom(){
    cout<<"Au au au au"<<endl;
}

Viralata::Viralata():Cachorro(){
}

void Viralata::emitirSom(){
    cout<<"AU AU AU AU"<<endl;
}