#include "aluno.h"

Aluno::Aluno(){
    matricula = 0;
    nome = "";
    email = "";
}

Aluno::Aluno(int matricula, string nome, string email){
    this->matricula = matricula;
    this->nome = nome;
    this->email = email;
}

void Aluno::setMatricula(int matricula){
    this->matricula = matricula;
}

int Aluno::getMatricula(){
    return matricula;
}

void Aluno::mostrarAluno(){
    cout << "Matricula: " << matricula << endl;
    cout << "Nome: " << nome << endl;
    cout << "Email: " << email << endl;
}
