#ifndef IMOVEL_H
#define IMOVEL_H
#include<iostream>
using namespace std;

class Imovel{
    protected:
        string endereco;
        float preco;
    public:
        Imovel();
        Imovel(string, float);
        void setEndereco(string);
        string getEndereco();
        void setPreco(float);
        float getPreco();
        virtual void ImprimirPreco()=0;
};

class ImovelNovo:public Imovel{
    protected:
        float valorAdicional;
    public:
        ImovelNovo();
        ImovelNovo(string, float, float);
        void setValorAdicional(float);
        float getValorAdicional();
        void ImprimirPreco();
};

class ImovelVelho:public Imovel{
    protected:
        float valorDesconto;
    public:
        ImovelVelho();
        ImovelVelho(string, float, float);
        void setValorDesconto(float);
        float getValorDesconto();
        void ImprimirPreco();
};

#endif // !1

