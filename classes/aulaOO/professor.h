#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <iostream>
#include <string>
#include "pessoa.h"

using namespace std;

class Professor: public Pessoa{
    private:
        int codigo;
        string depto;

    public:
        Professor(void);
        Professor(int codigo, string nome, string email, string depto);
        void setCodigo(int codigo);
        int getCodigo();
        void setDepto(string depto);
        string getDepto();  
        void mostrar();
};

#endif // !PROFESSOR_H

