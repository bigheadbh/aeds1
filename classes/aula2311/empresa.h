#ifndef EMPRESA_H
#define EMPRESA_H

#include<iostream>
#include<string>

using namespace std;

class Empresa{

    protected:
        string nome;
        string endereco;
        string cidade;
        string estado;
        string cep;
        string telefone;
    
    public:
        Empresa();
        Empresa(string nome, string endereco, string cidade, string estado, string cep, string telefone);
        string getNome();
        string getEndereco();
        string getCidade();
        string getEstado();
        string getCep();
        string getTelefone();
        void setNome(string nome);
        void setEndereco(string endereco);
        void setCidade(string cidade);
        void setEstado(string estado);
        void setCep(string cep);
        void setTelefone(string telefone);
        void print();
};


#endif