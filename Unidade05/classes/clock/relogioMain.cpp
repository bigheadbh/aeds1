#include <iostream>
#include "relogio.h"

int main(){
    Relogio *r1 = new Relogio(8, 10, 00);
    int hora, minuto, segundo;
    r1->nextHora();
    r1->getHora(&hora, &minuto, &segundo);
    cout<<hora<<":"<<minuto<<":"<<segundo<<endl;
    return 0;
}