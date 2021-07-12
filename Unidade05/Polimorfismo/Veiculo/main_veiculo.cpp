
#include <iostream>
#include "veiculo.h"

int main(){
    Veiculo *veiculos[2];
    veiculos[0] = new Bicicleta();
    veiculos[1] = new Automovel();

    Automovel *carro = (Automovel*) veiculos[1];
    veiculos[1]->ajustar();
    veiculos[1]->limpar();
    carro->mudarOleo();
    veiculos[1]->listarVerificacoes();
    return 0;
}