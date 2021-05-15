#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>

using namespace std;

class Pessoa{
    private:
    string nome;
    float altura;
    float peso;

    public: 
    Pessoa();
    Pessoa(string nome, float altura, float peso);
    void setNome(string nome);
    void setPeso(float pesoFora);
    void setAltura(float alturaFora);
    string getNome();
    float getPeso();
    float getAltura();
    float getIMC();
};

#endif // !PESSOA_H