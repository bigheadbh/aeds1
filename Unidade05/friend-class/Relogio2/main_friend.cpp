#include <iostream>
#include "relogio.h"
#include "mensagem.h"

int main(){
    Relogio r[10];// = new Relogio(10,5,0);
    Mensagem m;
    m.imprimir(r);
    //delete r[0];
    return 0; 
}