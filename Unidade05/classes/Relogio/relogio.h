#ifndef RELOGIO_H
#define RELOGIO_H

#include<iostream>
using namespace std;
class Relogio{
    private:
        int hora;
        int minuto;
        int segundo;

    public:
        Relogio();
        Relogio(int hora, int minuto, int segundo);
        void setHora(int hora, int minuto, int segundo);
        void getHora(int *hora, int *minuto, int *segundo);
        void avancaHora();
};

#endif // !RELOGIO_H
