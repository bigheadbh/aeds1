#ifndef FIGURA_H
#define FIGURA_H

#include<iostream>
using namespace std;

class Figura{
    protected:
        string cor;
        bool preenchida;
    public:
        Figura();
        Figura(string cor, bool preenchida);
        virtual float getArea()=0;
        virtual float getPerimetro()=0;
        //virtual void desenha()=0;
};

class Circulo:public Figura{
    private:
        float raio;
    public:
        Circulo();
        Circulo(float raio, string cor, bool preenchida);
        void setRaio(float raio);
        float getRaio();
        float getArea();
        float getPerimetro();
};

class Quadrado:public Figura{
    private:
        float lado;
    public:
        Quadrado();
        Quadrado(float lado, string cor, bool preenchida);
        void setLado(float lado);
        float getLado();
        float getArea();
        float getPerimetro();
};

class Retangulo:public Figura{
    private:
        float base;
        float altura;
    public:
        Retangulo();
        Retangulo(float base, float altura, string cor, bool preenchida);
        void setBase(float base);
        float getBase();
        void setAltura(float altura);
        float getAltura();
        float getArea();
        float getPerimetro();
};

#endif // !FIGURA_H

