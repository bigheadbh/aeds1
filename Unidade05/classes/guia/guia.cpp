#include <iostream>
#include "guia.h"
using namespace std;

Guia::Guia(){
    this->id = to_string(rand()%10) + to_string(rand()%10) + to_string(rand()%10);
    this->titulo = "";
    this->url = "";
}

Guia::Guia(string titulo, string url){
    this->id = to_string(rand()%10) + to_string(rand()%10) + to_string(rand()%10);
    this->titulo = titulo;
    this->url = url;
}

void Guia::setId(string id){
    this->id = id;
}

void Guia::setTitulo(string titulo){
    this->titulo = titulo;
}

void Guia::setUrl(string url){
    this->url = url;
}

string Guia::getId(){ return id; }

string Guia::getTitulo(){ return titulo; }

string Guia::getUrl(){ return url; }