#include <iostream>
#include "navegador.h"
#include "guia.h"

using namespace std;

void menu(){
    system("clear");
    cout << "1- Para abrir uma guia" << endl;
    cout << "2- Para fechar uma guia" << endl;
    cout << "3- Para listar guias abertas" << endl;
    cout << "4- Para sair..." << endl;
}

int main(){
    Navegador * nav = new Navegador();
    int opcao, num;
    string titulo, url;
    menu();
    cout << "Informe uma opção!!!" << endl;
    cin >> opcao; cin.ignore();
    while(opcao != 4){
        switch(opcao){
            case 1:
                cout << "Entre com url: " << endl;
                cin >> url; cin.ignore();
                cout << "Entre com titulo: " << endl;
                getline(cin, titulo); cin.ignore();
                nav->abrirGuia(titulo, url);
                getchar();
                break;
            case 2:
                cout << "Entre com o número da guia a ser fechada: " << endl;
                cin >> num; cin.ignore();
                nav->fecharGuia(num);
                getchar();
                break;
            case 3:
                nav->listarGuias();
                getchar();
                break;
            default:
                cout << "Opção inválida!!" << endl;
                getchar();
                break;
        }
        menu();
        cin >> opcao; cin.ignore();
    }



    return 0;
}