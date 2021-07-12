#include"mensagem.h"
#include<iomanip>

Mensagem::Mensagem(){
    this->msg = "";
}

void Mensagem::imprimir(Relogio *r1){
    //msg = to_string(r1.horas) + ":" + to_string(r1.minutos) + ":" + to_string(r1.segundos);
    cout << setfill('0') << setw(2) << r1->horas<<":";
    cout << setfill('0') << setw(2) << r1->minutos<<":";
    cout << setfill('0') << setw(2) << r1->segundos<<endl;
}
