#ifndef RELOGIO_H
#define RELOGIO_H

#include <iostream>

class Relogio{
    friend class Mensagem;
    private:
        int hora;
        int minutos;
        int segundos;

    public:
        Relogio();
        Relogio(int hora, int segundos, int minutos);
};


#endif
