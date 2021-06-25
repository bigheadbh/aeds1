#ifndef PESSOA_H
#define PESSOA_H

#include<iostream>
#include<string>

using namespace std;

class Pessoa{
    protected: 
        string nome;
        string email;
    public:
        Pessoa();
        Pessoa(string nome, string email);
        void setNome(string nome);
        string getNome();
        void setEmail(string email);
        string getEmail();
};


#endif