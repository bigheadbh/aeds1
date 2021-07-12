#ifndef DATA_H
#define DATA_H

#include<iostream>
using namespace std;

class Data{
    private: 
        int dia;
        int mes;
        int ano;
    public: 
        Data();
        Data(int dia, int mes, int ano);
        string toString();
        Data *clone();
};

#endif // !DATA_H