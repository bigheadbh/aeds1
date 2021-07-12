#include"guia.h"

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
#ifdef DEBUG
    cout<<"Guia::setTitulo" << endl;
#endif // DEBUG
    this->titulo = titulo;
}
void Guia::setUrl(string url){
    this->url = url;
}
string Guia::getId(){
    return this->id;
}
string Guia::getTitulo(){
    return this->titulo;
}
string Guia::getUrl(){
    return this->url;
}
