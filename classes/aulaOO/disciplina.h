#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include<iostream>
#include<string>

using namespace std;

class Disciplina{
    private:
        int codigo;
        string nome;
        short nota;

    public:
        Disciplina();
        Disciplina(int, string, short);
        void setCodigo(int codigo);
        int getCodigo(void);
        void setNome(string nome);
        string getNome(void);
        void setNota(short nota);
        short getNota(void);
        void mostrar(void);
};

#endif // !DISCIPLINA_H



