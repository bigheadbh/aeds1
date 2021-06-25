#include <iostream>
#include "elevador.h"

void menu(){
    system("clear");
    cout << "***********************************" << endl;
    cout << "*         MENU DE OPCOES          *"<< endl;
    cout << "***********************************" << endl;
    cout << "1) para o Elevador subir" << endl;
    cout << "2) para o Elevador descer" << endl;
    cout << "3) para entrar no Elevador" << endl;
    cout << "4) para sair do Elevador" << endl;
    cout << "5) para mostrar o status" << endl;
    cout << "6) para sair do programa" << endl;
}


int main(){
    Elevador eve;
    int opcao = -1;
    eve.inicializa(10,4);
    do{
        menu();
        cout << "Digite uma opcao"<<endl;
        cin >> opcao;
        switch (opcao){
            case 1:
                if(eve.sobe()== false){
                    cout << "Elevador está no ultimo andar!";
                } else {
                    cout << "Elevador está no andar: "<< eve.getAndarAtual() << endl;
                }
                break;

            case 2:
                if (eve.desce() == false){
                    cout << "Elevador está no térreo!";
                }else{
                    cout << "Elevador está no andar: " << eve.getAndarAtual() << endl;
                }
                break;

            case 3:
                if (eve.entra() == false){
                    cout << "Elevador Lotado!";
                }
                break;

            case 4:
                if (eve.sai() == false){
                    cout << "Elevador Vazio!";
                }
                break;

            case 5: 
                //eve.mostrar();
                cout << eve.toString();
                break;
            
            case 6:
                cout << "Progama sendo encerrado....";
                break;

            default:
                cout << "Opção Inválida....";
                break;
        }
        cout<< "Pressione uma tecla para continuar..."<<endl;
        cin.ignore();
        cin.get();
    }while(opcao != 6);

    return 0;
}