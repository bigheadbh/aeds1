#ifndef ALUNO_H
#define ALUNO_H

#include<iostream>
#include<string>
#include "pessoa.h"

using namespace std;

class Aluno: public pessoa{
    private:
        int matricula;
    
    public: 
        Aluno();
        Aluno(int matricula, string nome, string email);
        void setMatricula(int matricula);
        int getMatricula();
        void mostrarAluno();
};

#endif // !ALUNO_H