#include"disciplina.h"

Disciplina::Disciplina(){
    nome = "";
    codigo = 0;
    nota = -1;
}

Disciplina::Disciplina(int codigo, string nome, short nota){
    this->nome = nome;
    this->codigo = codigo;
    this->nota = nota;
}

void Disciplina::setCodigo(int codigo){
    this->codigo = codigo;
}

int Disciplina::getCodigo(void){
    return codigo;
}

void Disciplina::setNome(string nome){
    this->nome = nome;
}

string Disciplina::getNome(void){
    return nome;
}

void Disciplina::setNota(short nota){
    this->nota = nota;
}

short Disciplina::getNota(void){
    return nota;
}

void Disciplina::mostrar(void){
    cout << codigo << endl;
    cout << nome << endl;
    cout << nota << endl;
}