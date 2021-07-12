#ifndef DATA_H
#define DATA_H

/* Crie uma classe para representar datas. 
 * Represente uma data usando três atributos: o dia, o mês, e o ano.
 * Sua classe deve ter um construtor que inicializa os três atributos e verifica a validade dos valores fornecidos. 
 * Forneça um construtor sem parâmetros que inicializa a data com a data atual fornecida pelo sistema operacional. 
 * Forneça um método set um get para cada atributo. 
 * Forneça o método toString para retornar uma representação da data como string. Considere que a data deve ser formatada mostrando o dia, o mês e o ano separados por barra (/). 
 * Forneça uma operação para avançar uma data para o dia seguinte. 
 * Escreva um aplicativo de teste que demonstra as capacidades da classe.
*/

#include<iostream>
#include<string>

using namespace std;

class DataInvalida{
    private:
        string msg;

    public:
        DataInvalida(string msg){
            this->msg = msg;
        }

        void Msg(){
            cout << msg << endl;
        }
};

class Data {
    private:
        short dia, mes, ano;
        short horas, minutos;

    public:
        Data(); // com a data atual
        Data(short dia, short mes, short ano);
        short getDia();
        short getMes();
        short getAno();
        short getHoras();
        short getMinutos();
        void setDia(short dia);
        void setMes(short mes);
        void setAno(short ano);
        void setHoras(short horas);
        void setMinutos(short minutos);
        string toString();
        void proximoDia();
        bool verificarData();
};


#endif // !1

