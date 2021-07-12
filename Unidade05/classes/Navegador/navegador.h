#ifndef NAVEGADOR_H
#define NAVEGADOR_H

#include"guia.h"

#define MAXTAM 100

class Navegador{
    private:
        Guia **guias;
        int count;
    public:
        Navegador();
        void abrirGuia(string titulo, string url);
        void fecharGuia(int n);
        void listarGuias();
};


#endif