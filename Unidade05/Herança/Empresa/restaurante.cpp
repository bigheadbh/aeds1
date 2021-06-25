#include"restaurante.h"

Restaurante::Restaurante():Empresa(){
    tipoComida = 0;
    precoMedio = 0;
}

Restaurante::Restaurante(string nome, string endereco, string cidade, string estado,
                         string cep, string telefone, int tipoComida, float precoMedio):
                         Empresa(nome, endereco, cidade, estado, cep, telefone){
    this->tipoComida = tipoComida;
    this->precoMedio = precoMedio;
}

void Restaurante::setTipoComida(int tipoComida){
    this->tipoComida = tipoComida;
}

void Restaurante::setPrecoMedio(float precoMedio){
    this->precoMedio = precoMedio;
}

int Restaurante::getTipoComida(){
    return tipoComida;
}

float Restaurante::getPrecoMedio(){
    return precoMedio;
}

void Restaurante::print(){
    Empresa::setNome("Varandas Restaurant");
    Empresa::print();
    cout << "Tipo Comida: " << tipoComida << endl;
    cout << "Preco Medio: " << precoMedio << endl;
}

