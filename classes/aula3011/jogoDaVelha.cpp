#include "jogoDaVelha.h"

JogoDaVelha::JogoDaVelha(){
    countJogadas = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tabuleiro[i][j] = VAZIO;
        }
    }
}

void JogoDaVelha::mostrarTabuleiro(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(tabuleiro[i][j] == JOGADOR01){
                cout << "X\t";
            }else if(tabuleiro[i][j] == JOGADOR02){
                cout << "O\t";
            }else{
                cout << " \t";
            }
        }
        cout<< endl;
    }
}

bool JogoDaVelha::setJogada(jogada jogador, short x, short y){
    bool resp = false;
    if(tabuleiro[x][y] == VAZIO){
        tabuleiro[x][y] = jogador;
        resp = true;
        countJogadas++;
    }
    return resp;
}

bool JogoDaVelha::verificaJogada(jogada jogador)
{
    bool resp = false;
    for(int i = 0; i < 3; i++){
        if(tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador &&
        tabuleiro[i][2] == jogador)
            resp = true;
    }
    for (int i = 0; i < 3; i++){
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador &&
            tabuleiro[2][i] == jogador)
            resp = true;
    }
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador &&
        tabuleiro[2][2] == jogador){
            resp = true;
    }
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador &&
        tabuleiro[2][0] == jogador){
        resp = true;
    }
    return resp;
}

short JogoDaVelha::verificaTabuleiro(){
    short resp = VAZIO;
    if(verificaJogada(JOGADOR01)){
        resp = JOGADOR01;
    }else if(verificaJogada(JOGADOR02)){
        resp = JOGADOR02;
    }
    else if (countJogadas == 9){
        resp = DEUVELHA;
    }
    return resp;
}