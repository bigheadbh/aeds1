#include<iostream>
#include"loja.h"
#include"item.h"

using namespace std;

Loja::Loja(){
    this->count = 0;
}

int Loja::getCount(){
    return this->count;
}

void Loja::addItem(){
    int opcao;
    system("cls||clear");
    cout<<"Qual item sera adicionado? (1-livro, 2-CD, 3-DVD)"<<endl;
    cin>>opcao; cin.ignore();
    string nome; 
    float preco;
    if(opcao == 1){
        string autor;
        cout<< "Entre com o nome do livro: "; 
        getline(cin,nome);
        cout<< "Entre com o preco: ";
        cin>>preco; cin.ignore();
        cout<< "Informe o autor do livro: ";
        getline(cin,autor);
        this->itens[count] = new Livro(nome, preco, autor);
    }else if(opcao == 2){
        int numfaixas;
        cout<< "Entre com o nome do CD: "; 
        getline(cin,nome);
        cout<< "Entre com o preco: ";
        cin>>preco; cin.ignore();
        cout<< "Informe a qtde de faixas: ";
        cin>>numfaixas; cin.ignore();
        this->itens[count] = new CD(nome, preco, numfaixas);
    }else if(opcao == 3){
        float duracao;
        cout<< "Entre com o nome do DVD: "; 
        getline(cin,nome);
        cout<< "Entre com o preco: ";
        cin>>preco; cin.ignore();
        cout<< "Informe a duracao do DVD: ";
        cin>>duracao; cin.ignore();
        this->itens[count] = new DVD(nome, preco, duracao);
    }
    this->count++;
}

void Loja::showItens(){
    for(int i=0; i<count; i++){
        cout<< itens[i]->toString() << endl;
    }
    cout<<"Press ENTER to continue..."<<endl;
    getchar();
}

