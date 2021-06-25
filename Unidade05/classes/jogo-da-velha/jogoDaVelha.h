/* Escreva um programa completo para jogar o jogo da velha. Para tanto crie uma classe
JogoDaVelha:
• a classe deve conter como dados privados um array bidimensional 3x3 para representar a grade do jogo
• crie uma enumeração para representar as possibilidades de ocupação de uma casa na grade (vazia,
jogador 1 ou jogador 2)
• o construtor deve inicializar a grade como vazia
• forneça um método para exibir a grade
• permita dois jogadores humanos
• forneça um método para jogar o jogo; todo movimento deve ocorrer em uma casa vazia; depois de
cada movimento, determine se houve uma derrota ou um empate.*/

#ifndef JOGODAVELHA_H
#define JOGODAVELHA_H

#include<iostream>

using namespace std;



class JogoDaVelha{
    public:
        enum jogada
        {
            VAZIO = 10,
            JOGADOR01,
            JOGADOR02,
            DEUVELHA
        };

    
        jogada tabuleiro[3][3];
        short countJogadas;

    public:
        JogoDaVelha();
        void mostrarTabuleiro();
        bool setJogada(jogada jogador, short x, short y);
        bool verificaJogada(jogada jogador);
        short verificaTabuleiro();
};

#endif // !JOGODAVELHA_H
