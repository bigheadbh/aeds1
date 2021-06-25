#ifndef NAVEGADOR_H
#define NAVEGADOR_H

#include <iostream>
#include "guia.h"
using namespace std;

#define MAXTAM 100

class Navegador{
    private:
        Guia *guias[MAXTAM];
        int count;

    public:
        Navegador();
        void abrirGuia(string, string);
        void fecharGuia(int);
        void listarGuias();
};

#endif