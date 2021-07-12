#ifndef INGRESSO_H
#define INGRESSO_H
#include <iostream>

using namespace std;

class Ingresso{
    protected:
        float valor;
    public:
        Ingresso();
        Ingresso(float valor);
        void setValor(float valor);
        float getValor();
        virtual void imprimeValor();
};

class IngressoVip:public Ingresso{
    protected:
        float valorAdicional;
    public:
        IngressoVip();
        IngressoVip(float valor, float valorAdicional);
        void imprimeValor();
};

class IngressoNormal:public Ingresso{
    public:
        IngressoNormal();
        IngressoNormal(float valor);
        void imprimeValor();
};

class CamaroteInferior:public IngressoVip{
    protected:
        string localizacao;
    public: 
        CamaroteInferior();
        CamaroteInferior(string localizacao, float valor, float valorAdicional);
        void setLocalizcao(string localizacao);
        string getLocalizacao();
        void imprimeValor();
};

#endif // !INGRESSO_H