#include "Pessoa.h"

Pessoa::Pessoa(){
    cout << "Construtor Primário" << endl;
    nome = "";
    altura = 0;
    peso = 0;
}

Pessoa::Pessoa(string nome, float altura, float peso){
    cout << "Construtor Secundário" << endl;
    this->nome = nome;
    this->altura = altura;
    this->peso = peso;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setPeso(float pesoFora){
    if (pesoFora > 0){
        peso = pesoFora;
    }
}

void Pessoa::setAltura(float alturaFora){
    altura = alturaFora;
}

string Pessoa::getNome(){
    return nome;
}

float Pessoa::getPeso(){
    return peso;
}

float Pessoa::getAltura(){
    return altura;
}

float Pessoa::getIMC(){
    return peso / (altura * altura);
}

int main(){
    string nome;
    float altura;
    float peso;
    cout<<"Entre com o nome"<<endl;
    getline(cin, nome);
    cout<<"Entre com a altura"<<endl;
    cin>>altura;
    cout<<"Entre com o peso"<<endl;
    cin>>peso;

    Pessoa p1(nome, altura, peso);
    //Pessoa *p1 = new Pessoa(nome, altura,peso);
    cout<<"O seu imc ehhh: "<<p1.getIMC()<<endl;

    return 0;
}