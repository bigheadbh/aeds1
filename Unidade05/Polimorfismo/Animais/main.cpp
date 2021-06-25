#include <iostream>
#include "animais.h"
using namespace std;

int main(){
    Animal *animais[2];

    animais[0] = new Vaca();
    animais[1] = new Cachorro();

    for(int i = 0; i < 2; i++){
        animais[i]->emitirSom();
    }

    return 0;
}