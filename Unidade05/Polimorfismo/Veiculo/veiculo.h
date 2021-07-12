#ifndef VEICULO_H
#define VEICULO_H
#include<iostream>
#include<string>
#include<list>
using namespace std;

class Veiculo{
    public:
        virtual void listarVerificacoes()=0;
        virtual void ajustar()=0;
        virtual void limpar()=0;
};

class Bicicleta : public Veiculo{
    private:
        list <string> verificacoes;
    public:
        Bicicleta();
        void listarVerificacoes();
        void ajustar();
        void limpar();
};

class Automovel : public Veiculo{
    private:
        int quilometragem;
        list <string> verificacoes;
    public:
        Automovel();
        void listarVerificacoes();
        void ajustar();
        void limpar();
        void mudarOleo();
};
#endif // !VEICULO_H