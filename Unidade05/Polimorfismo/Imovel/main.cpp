#include<iostream>
#include"imovel.h"

int main(){
    Imovel *imoveis[3];
    imoveis[0] = new ImovelNovo("Av. Afonso Pena", 1000, 100);
    imoveis[1] = new ImovelVelho("Av. Cristiano Machado", 1000, 100);

    for(int i = 0; i < 2; i++)
        imoveis[i]->ImprimirPreco();

    return 0;
}