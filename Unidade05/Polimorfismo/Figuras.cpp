// classes para circulo, quadrado, triangulo....
#include<iostream>
#include<string>
#include<math.h>

#define PI 3.14159265359

using namespace std;

class Figura {
    protected:
        int cor;
    public:
        void setCor(int cor){
            this->cor = cor;
        }
        float getCor(){
            return cor;
        }
        virtual float getArea()=0;
        virtual float getPerimetro()=0;
};

class Circulo: public Figura {
    private:
        float raio;

    public:
        Circulo(){
            raio = 0;
        }

        Circulo(float raio){
            this->raio = raio;
        }

        void setRaio(float raio){
            this->raio = raio;
        }

        float getRaio(){
            return raio;
        }

        float getArea(){
            return PI * raio * raio;
        }

        float getPerimetro(){
            return 2 * PI * raio;
        }

        float getDiametro(){
            return 2 * raio;
        }
};

class Quadrado: public Figura {
    private:
        float lado;
    
    public:
        Quadrado(){
            lado = 0;
        }
        
        Quadrado(float lado){
            this->lado = lado;
        }
        
        void setLado(float lado){
            this->lado = lado;
        }

        float getLado(){
            return lado;
        }

        float getArea(){
            return lado * lado;
        }

        float getPerimetro(){
            return 4 * lado;
        }

        float getDiagonal(){
            return lado * sqrt(2);
        }
};

class Triangulo: public Figura {
    private:
        float base;
        float altura;
    
    public:
        Triangulo(){
            base = 0;
            altura = 0;
        }

        Triangulo(float base, float altura){
            this->base = base;
            this->altura = altura;
        }
        
        void setBase(float base){
            this->base = base;
        }
        
        void setAltura(float altura){
            this->altura = altura;
        }
        
        float getBase(){
            return base;
        }

        float getAltura(){
            return altura;
        }

        float getArea(){
            return (base*altura)/2;
        }
        
        float getPerimetro(){
            return 3 * base;
        }
};

int main(){
    Circulo c1;
    Triangulo t1;

    Figura *f1 = &c1;

    float raio;
    cout<<"Entre com o raio: ";
    cin>>raio;

    c1.setRaio(raio);
    cout<<"O valor da area eh: "<<c1.getArea()<<endl;
    cout<<"O valor da perimetro eh: "<<c1.getPerimetro()<<endl;

    return 0;
}