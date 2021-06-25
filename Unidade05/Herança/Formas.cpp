// classes para circulo, quadrado, triangulo....

#include<iostream>
#include<string>
#include<math.h>

#define PI 2*asin(1.0);

using namespace std;

class Figura{
    private:
        static int count;
    protected: 
        int cor;
    public:
        Figura(){
            count++;
            cor = -1;
        }
        void setCor(int cor){
            this->cor = cor;
        }
        int getCor(){
            return cor;
        }
        int getCount(){
            return count;
        }
        float getArea();
        float getPerimetro();
};

class Circulo:public Figura{
    private:
        float raio;

    public:
        Circulo():Figura(){
            raio = 0;
        }

        Circulo(float raio, int cor){
            this->raio = raio;
            this->cor = cor;
        }

        void setRaio(float raio){
            this->raio = raio;
        }

        float getRaio(){
            return raio;
        }

        float getDiametro(){
            return 2*raio;
        }

        float getArea(){
            return raio * raio * PI;
        }

        float getPerimetro(){
            return 2 * raio * PI;
        }
};

class Quadrado:public Figura{
    private:
        float lado;

    public:
        Quadrado() : Figura(){
            lado = 0;
        }
        Quadrado(float lado, int cor){
            this->lado = lado;
            this->cor = cor;
        }
        void setLado(float lado){
            this->lado = lado;
        }
        float getLado(){
            return lado;
        }
        float getArea(){
            return lado*lado;
        }
        float getPerimetro(){
            return 4*lado; 
        }
        float getDiagonal(){
            return lado*sqrt(2);
        }
};

class Triangulo:public Figura{
    private:
        float base;
        float altura;
    
    public:
        Triangulo():Figura(){
            base = 0;
            altura = 0;
        }
        Triangulo(float base, float altura, int cor){
            this->base = base;
            this->altura = altura;
            this->cor = cor;
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
            return 3*base;
        }
};

int Figura::count = 0;

int main(){
    Quadrado q1, q2;
    Circulo c1, c2;
    Triangulo t1;

    cout<<"quantas figuras eu tenho: "<<c1.getCount()<<endl;

    return 0;
}