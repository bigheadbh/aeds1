#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>
using namespace std;

class Figura{
    protected:
        string cor;
        bool preenchida;

    public:
        Figura();
        Figura(string, bool);
        virtual float getArea() = 0;
        virtual float getPerimetro() = 0;
};

class Circulo:public Figura{
    private:
        float raio;

    public:
        Circulo();
        Circulo(float, string, bool);
        void setRaio(float);
        float getRaio();
        float getArea();
        float getPerimetro();
};

class Quadrado:public Figura{
    private:
        float lado;
    
    public:
        Quadrado();
        Quadrado(float, string, bool);
        void setLado(float);
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
        Retangulo(float, float, string, bool);
        void setBase(float);
        void setAltura(float);
        float getBase();
        float getAltura();
        float getArea();
        float getPerimetro();
};

#endif