#include<iostream>
#include<ctime>
#include<iomanip>
#include<list>
#include"veiculo.h"
using namespace std;

string getDate(){
    auto t = time(nullptr);
    auto tm = *localtime(&t);
    ostringstream oss;
    oss << put_time(&tm, "%d/%m/%Y %H:%M:%S");
    return oss.str();
}

Bicicleta::Bicicleta(){
    this->verificacoes.clear();
}

void Bicicleta::listarVerificacoes(){
    list <string> :: iterator t = verificacoes.begin();
    for( ; t != verificacoes.end(); t++)
        cout<< *t<< endl;
}

void Bicicleta::ajustar(){
    string evento  = "Bike::ajustar (" + getDate() + ")";
    this->verificacoes.push_back(evento);
}

void Bicicleta::limpar(){
    string evento  = "Bike::limpar (" + getDate() + ")";
    this->verificacoes.push_back(evento);
}

Automovel::Automovel(){
    this->quilometragem = 0;
    this->verificacoes.clear();
}

void Automovel::listarVerificacoes(){
    list <string> :: iterator t;
    for(t = verificacoes.begin(); t != verificacoes.end(); t++)
        cout<< *t<< endl;
}

void Automovel::ajustar(){
    string evento  = "Carro::ajustar (" + getDate() + ") + km rodados: " + to_string(quilometragem);
    this->verificacoes.push_back(evento);
}

void Automovel::limpar(){
    string evento  = "Carro::limpar (" + getDate() + ") + km rodados: " + to_string(quilometragem);
    this->verificacoes.push_back(evento);
}

void Automovel::mudarOleo(){
    string evento  = "Carro::trocarOleo (" + getDate() + ") + km rodados: " + to_string(quilometragem);
    this->verificacoes.push_back(evento);
}


