#ifndef PONTO_H
#define PONTO_H

class Ponto{
    private:
        float x;
        float y;
    
    public:
        Ponto();
        Ponto(float x, float y);
        void setX(float x);
        void setY(float y);
        float getX();
        float getY();
        void mostrar();
        bool equals(Ponto p);
        bool operator==(Ponto &p);
        bool operator!=(Ponto &p);
        Ponto operator+(Ponto &p);
        Ponto operator-(Ponto &p);
        float getDistancia(Ponto p);
};

#endif