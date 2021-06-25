#ifndef RELOGIO_H
#define RELOGIO_H
#include <iostream>

using namespace std;

/*
 * Crie uma classe em C++ chamada Relogio para armazenar um horário, composto por hora, minuto e segundo. A classe deve representar esses componentes 
 * de horário e deve apresentar os métodos descritos a seguir:
 * - um método chamado setHora, que deve receber o horário desejado por parâmetro (hora, minuto e segundo);
 * - um método chamado getHora para retornar o horário atual, através de 3 variáveis passadas por referência;
 * - um método para avançar o horário para o próximo segundo (lembre-se de atualizar o minuto e a hora, quando for o caso).
*/

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
        void nextHora();
};

#endif // !RELOGIO_H