#include "data.h"
#include <ctime>

Data::Data(){
    time_t t = time(0);
    tm *now = localtime(&t);
    dia = now->tm_mday;
    mes = now->tm_mon + 1;
    ano = now->tm_year + 1900;
} 

Data::Data(short dia, short mes, short ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    this->horas = 0;
    this->minutos = 0;

    if(verificarData() == false){
        throw DataInvalida("Data inexistente....");
    }
}

short Data::getDia(){
    return dia;
}

short Data::getMes(){
    return mes;
}

short Data::getAno(){
    return ano;
}

short Data::getHoras(){
    return horas;
}

short Data::getMinutos(){
    return minutos;
}

void Data::setDia(short dia){
    this->dia = dia;
}

void Data::setMes(short mes){
    this->mes = mes;
}

void Data::setAno(short ano){
    this->ano = ano;
}

void Data::setHoras(short horas){
    this->horas = horas;
}

void Data::setMinutos(short minutos){
    this->minutos = minutos;
}

string Data::toString(){
    string resp = to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano) + "\t" + to_string(horas) + ":" + to_string(minutos);
    return resp;
}

void Data::proximoDia(){
    dia++; // incremento o dia 

    //verifico as consistencias
    //verificaçao para meses de 31 dias
    if(mes==1 || mes==3 || mes == 5 || mes == 7 || 
        mes == 8 || mes == 10 || mes == 12){
        if(dia == 32){ // estrapolou dia
            dia = 1; mes++;
            if(mes == 13){ // estrapolou mes
                mes = 1; ano ++;
            }
        }
    //meses com menos de 31 dias
    } else { 
        if(mes == 2){ // Feveiro
            if((ano%4==0 && ano%100!=0) || ano%400==0){ //ano bissexto
                if(dia == 30){
                    dia = 1; mes = 3;
                }
            } else { //ano nao bissexto
                if(dia == 29){
                    dia = 1; mes = 3;
                }
            }
        } else { // outros
            if (dia == 31){ // estrapolou dia
                dia = 1; mes++;
            }
        }
    }
}

bool Data::verificarData(){
    bool resp = true;

    if(ano < 0){
        resp = false;
    }else if(mes<1 || mes>12){
        resp = false;
    }else if(dia<1){
        resp = false;
    }else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
             mes == 8 || mes == 10 || mes == 12){
        if(dia > 31){
            resp = false;
        }
    }else if(mes == 2){
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) { //ano bissexto
            if (dia > 29){
                resp = false;
            }
        }
        else{ //ano nao bissexto
            if (dia > 28) {
                resp = false;
            }
        }
    }else {
        if (dia > 30){
            resp = false;
        }
    }
    return resp;
}
