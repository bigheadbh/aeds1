#ifndef ELEVADOR_H
#define ELEVADOR_H

#include<iostream>
#include<string>

using namespace std;

#define TERREO 0
#define VAZIO 0

class Elevador{
private:
    int andarAtual;
    int totalAndares;
    int capacidade;
    int lotacao;

public:
    Elevador();
    Elevador(int andarAtual, int totalAndares, int capacidade, int lotacao);

    void inicializa(int capacidade, int totalAndares);
    bool entra();
    bool sai();
    bool sobe();
    bool desce();
    void mostrar();
    string toString();

    void setAndarAtual(int andarAtual);
    void setTotalAndares(int totalAndares);
    void setCapacidade(int capacidade);
    void setLotacao(int lotacao);
    int getAndarAtual();
    int getTotalAndares();
    int getCapacidade();
    int getLotacao();
};

#endif // !ELEVADOR_H
