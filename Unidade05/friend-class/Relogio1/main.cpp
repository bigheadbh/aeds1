#include <iostream>
#include "relogio.h"
#include "mensagem.h"

using namespace std;

int main(){
    Relogio r(9, 20, 00);

    Mensagem m;

    m.imprimir(r); 

    return 0;
}