#include <iostream>
#include "mensagem.h"

Mensagem::Mensagem(){
    this->msg = "";
}
void Mensagem::imprimir(Relogio r1){
    msg = to_string(r1.hora)+ ":" + to_string(r1.minutos) + ":" + to_string(r1.segundos);
    cout << msg << endl;
}