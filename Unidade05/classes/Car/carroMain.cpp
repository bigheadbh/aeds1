#include <iostream>
#include "carro.h"

int main(){
    Carro *c1 = new Carro();
    Carro *c2 = new Carro();

    c1->abastecer(20);
    c2->abastecer(30);
    c1->mover(200);
    c2->mover(400);

    cout << "Carro 1: " << endl;
    c1->getStatus();
    cout << "Carro 2: " << endl;
    c2->getStatus();

    delete c1;
    delete c2;

    return 0;
}