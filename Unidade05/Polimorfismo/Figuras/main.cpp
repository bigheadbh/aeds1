#include <iostream>
#include "figura.h"
using namespace std;

int main(){
    Figura *figs[10];

    figs[0] = new Circulo(5, "verde", false);
    figs[1] = new Quadrado(10, "azul", true);
    figs[2] = new Retangulo(10, 20, "preto", false);

    for(int i = 0; i < 3; i++){
        cout << "Área da figura: " << figs[i]->getArea() << endl;
        cout << "Perímetro da figura: " << figs[i]->getPerimetro() << endl;
        cout << endl;
    }

    return 0;
}