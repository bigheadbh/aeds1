#include<iostream>
#include"jogoDaVelha.h"

using namespace std;

void menu(){
    system("clear");
    cout << "Escolha uma opção: " << endl;
    cout << "1) Para visualizar o tabuleiro" << endl;
    cout << "2) Para jogar " << endl;
    cout << "3) Para verificar Jogadas " << endl;
    cout << "4) Para sair" << endl;
}

int main(){
    JogoDaVelha jogo;
    int opcao;
    short jogador, linha, coluna;
    short resultado;

    while (opcao!=4) {
        menu();
        cin >> opcao;
        switch (opcao){
            case 1:
                jogo.mostrarTabuleiro();
                break;

            case 2:
                cout <<"Entre com o numero do jogador" << endl;
                cin >> jogador;
                cout <<"Entre com a linha da jogada: ";
                cin >> linha;
                cout << "Entre com a coluna da jogada: ";
                cin >> coluna;
                if (jogo.setJogada((JogoDaVelha::jogada)jogador, linha, coluna) == false)
                {
                    cout << "Posicao ja ocupada" << endl;
                }

            case 3:
                resultado = jogo.verificaTabuleiro();
                if (resultado == JogoDaVelha::JOGADOR01)
                {
                    cout << "Jogador 01 ganhou!!!" << endl;
                    opcao = 4;
                }
                else if (resultado == JogoDaVelha::JOGADOR02)
                {
                    cout << "Jogador 02 ganhou!!!" << endl;
                    opcao = 4;
                }
                else if (resultado == JogoDaVelha::DEUVELHA)
                {
                    cout << "Nenhum Jogador ganhou!!!" << endl;
                    opcao = 4;
                }
                else
                {
                    cout << "Ainda restam jogadas" << endl;
                }
                
                break;

            case 4:
                cout << "Game Over" << endl;
        }
        cout<< "Aperte uma tecla para continuar...";
        cin.ignore();
        getchar();
    }
    return 0;
}