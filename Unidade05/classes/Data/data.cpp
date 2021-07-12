#include<time.h>
#include"data.h"

Data::Data(){
#ifdef DEBUG
    cout<<"Construtor Primário" <<endl;    
#endif // DEBUG
    srand(time(NULL));
    this->dia = rand()%31+1;
    this->mes = rand()%12+1;
    this->ano = 1970 + rand()%51;
}

Data::Data(int dia, int mes, int ano){
#ifdef DEBUG
    cout<<"Construtor Secundário" <<endl;    
#endif // DEBUG
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

string Data::toString(){
    string resp = to_string(dia) + '/' + to_string(mes) + '/' + to_string(ano);
#ifdef DEBUG
    cout << resp << endl;
#endif // DEBUG
    return resp;
}

Data *Data::clone(){
    Data *resp = new Data();
    resp->ano = this->ano;
    resp->mes = this->mes;
    resp->dia = this->dia;
    return resp;
}