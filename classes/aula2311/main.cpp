
#include"restaurante.h"

int main(){
    Restaurante rest("Beco do Rato", "Avenida 31 de Marco", "Belo Horizonte", "MG", 
    "30000-000", "3319-4000", 10, 5.00);
    rest.print();

    Empresa *emp = (Empresa *)&rest;
    emp->print();

    return 0;
}