#include<iostream>
using namespace std;

class Figura{
    public:
        enum cor {VERMELHO, VERDE, AMARELO, AZUL, BRANCO};
        cor corfig;
        static int count;
        Figura(){
            cor = BRANCO;
            count ++;
        }
        ~Figura(){
            count --;
        }
        void printCount(){
            cout << &count<<"\t"<<count << endl;
        }
        virtual void desenhar() = 0;
};

class Circulo:public Figura{
    int raio;
    public:
        Circulo(int raio):Figura(){
            this->raio = raio;
        }
        void desenhar(){
            cout << "Eu sou circulo.. " << endl;
        }
};

class Quadrado:public Figura{
    int lado;
    public:
        Quadrado(int lado) : Figura(){
            this->lado = lado;
        }
        void desenhar(){
            cout<< "Eu sou quadrado..." << endl;
        }
};

int Figura::count = 0;

int main(){
    Figura *figuras[20];

    figuras[0] = new Quadrado(10);
    figuras[1] = new Circulo(3);
    figuras[2] = new Quadrado(15);

    for(int i=0; i<figuras[0]->count; i++){
        figuras[i]->desenhar();
    }
    
    return 0;
}