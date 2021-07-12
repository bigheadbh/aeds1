
/* Implemente uma classe televisão. A televisão tem um controle de volume do som e um controle de seleção de canal. O controle de volume permite aumentar ou diminuir a potência do volume de som em uma unidade de cada vez. O controle de canal também permite aumentar e diminuir o número do canal em uma unidade, porém, também possibilita trocar para um canal indicado. Também devem existir métodos para consultar o valor do volume de som e o canal selecionado. No programa principal, crie uma televisão e troque de canal algumas vezes. Aumente um pouco o volume, e exiba o valor de ambos os atributos.*/

#ifndef TELEVISAO_H
#define TELEVISAO_H

class Televisao{
    private:
        int channel;
        int volume;
    public:
        Televisao();
        Televisao(int, int);
        Televisao(int);
        void volumeUp();
        void volumeDown();
        void channelUp();
        void channelDown();
        void setChannel(int);
        void setVolume(int);
        int getChannel();
        int getVolume();
};
#endif // !TELEVISAO_H


