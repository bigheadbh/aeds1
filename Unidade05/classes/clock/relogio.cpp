#include "relogio.h"

/*
 * Crie uma classe em C++ chamada Relogio para armazenar um horário, composto por hora, minuto e segundo. A classe deve representar esses componentes 
 * de horário e deve apresentar os métodos descritos a seguir:
 * - um método chamado setHora, que deve receber o horário desejado por parâmetro (hora, minuto e segundo);
 * - um método chamado getHora para retornar o horário atual, através de 3 variáveis passadas por referência;
 * - um método para avançar o horário para o próximo segundo (lembre-se de atualizar o minuto e a hora, quando for o caso).
*/

Relogio::Relogio(){
    this->hora = 0;
    this->minuto = 0;
    this->segundo = 0;
}

Relogio::Relogio(int hora, int minuto, int segundo){
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

void Relogio::setHora(int hora, int minuto, int segundo){
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

void Relogio::getHora(int *hora, int *minuto, int *segundo){
    *hora = this->hora;
    *minuto = this->minuto;
    *segundo = this->segundo;
}

void Relogio::nextHora(){
    this->segundo++;
    if(this->segundo >= 60){
        this->segundo = 0;
        this->minuto++;
    }
    if(this->minuto >= 60){
        this->minuto = 0;
        this->hora++;
    }
    if(this->hora >= 24){
        this->hora = 0;
    }
}