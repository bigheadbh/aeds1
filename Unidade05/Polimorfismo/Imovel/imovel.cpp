#include"imovel.h"

Imovel::Imovel(){
    this->endereco = "";
    this->preco = 0;
}

Imovel::Imovel(string endereco, float preco){
    this->endereco = endereco;
    this->preco = preco;
}

void Imovel::setEndereco(string endereco){
    this->endereco = endereco;
}

string Imovel::getEndereco(){
    return this->endereco;
}

void Imovel::setPreco(float preco){
    this->preco = preco;
}

float Imovel::getPreco(){
    return this->preco;
}

ImovelNovo::ImovelNovo(){
    this->endereco = "";
    this->preco = 0;
    this->valorAdicional = 0;
}

ImovelNovo::ImovelNovo(string endereco, float preco, float valorAdicional):Imovel(endereco, preco){
    this->valorAdicional = valorAdicional;
}

void ImovelNovo::setValorAdicional(float valorAdicional){
    this->valorAdicional = valorAdicional;
}

float ImovelNovo::getValorAdicional(){
    return this->valorAdicional;
}

void ImovelNovo::ImprimirPreco(){
    cout << "Valor do Imovel Novo: R$ " << this->preco+this->valorAdicional << endl;
}

ImovelVelho::ImovelVelho(){
    this->endereco = "";
    this->preco = 0;
    this->valorDesconto = 0;
}

ImovelVelho::ImovelVelho(string endereco, float preco, float valorDesconto):Imovel(endereco, preco){
    this->valorDesconto = valorDesconto;
}

void ImovelVelho::setValorDesconto(float valorDesconto){
    this->valorDesconto = valorDesconto;
}

float ImovelVelho::getValorDesconto(){
    return this->valorDesconto;
}

void ImovelVelho::ImprimirPreco(){
    cout << "Valor do Imovel Velho: R$ " << this->preco - this->valorDesconto << endl;
}
