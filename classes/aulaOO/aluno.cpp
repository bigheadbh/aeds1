#include "aluno.h"

Aluno::Aluno():Pessoa(){
    matricula = 0;
}

Aluno::Aluno(int matricula, string nome, string email):Pessoa(nome, email){
    this->matricula = matricula;
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
