
#include "professor.h"

Professor::Professor(void){
    codigo = 0;
    nome = "";
    email = "";
    depto = "";
}

Professor::Professor(int codigo, string nome, string email, string depto){
    this->codigo = codigo;
    this->nome = nome;
    this->email = email;
    this->depto = depto;
}

void Professor::setCodigo(int codigo){
    this->codigo = codigo;
}

int Professor::getCodigo(){
    return codigo;
}

void Professor::setDepto(string depto){
    this->depto = depto;
}

string Professor::getDepto(){
    return depto;
}

void Professor::mostrar(){
    cout << codigo << endl;
    cout << nome << endl;
    cout << email << endl;
    cout << depto << endl;
}
