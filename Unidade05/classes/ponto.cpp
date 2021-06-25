#include<iostream>
using namespace std;

class Ponto{
    private:
    float x, y;
    
    public:
    Ponto(){
        x = 0;
        y = 0;
    }

    Ponto(float x, float y){
        this->x = x;
        this->y = y;
    }

    ~Ponto(){
        cout << "auto destruicao ativada!!"<<endl; 
    }

    void mostrar(){
        cout<< x << "\t" << y << endl;
    }

};


int main(){
    Ponto P (10, 20);
    Ponto *p1 = new Ponto(10, 35);
    Ponto *p2 = new Ponto(10, 37);

    cout << &P << endl;
    cout << p1 << "\t" << &p1 << endl;
    cout << p2 << "\t" << &p2 << endl;
    delete(&P);
    delete(p1);
    delete(p2);
    return 0;
}