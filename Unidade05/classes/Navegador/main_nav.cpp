#include<iostream>
#include"navegador.h"
#include"guia.h"

using namespace std;

void menu(){
    system("cls || clear");
    cout << "1- Para abrir uma guia" << endl;
    cout << "2- Para fechar uma guia" << endl;
    cout << "3- Para listar guias abertas" << endl;
    cout << "4- Para sair..." << endl;
}

int main(){
    Navegador *nav = new Navegador();
    int opcao, num;
    string titulo, url;
    menu();
    cout<<"Informe uma opcao!!"<< endl;
    cin >> opcao; cin.ignore();
    while(opcao != 4){
        switch (opcao){
            case 1:
                cout<<"Entre com url: "<<endl;
                getline(cin, url);
                cout<<"Entre com o nome: "<<endl;
                getline(cin, titulo); 
                nav->abrirGuia(titulo, url);
                getchar();
                break;
            case 2:
                nav->listarGuias();
                cout<<"Entre com numero da guia para fechar: "<<endl;
                cin>>num; cin.ignore();
                nav->fecharGuia(num);
                getchar();
                break;
            case 3:
                nav->listarGuias();
                getchar();
                break;
            default:
                cout<<"Opcao inválida!!" << endl;
                getchar();
                break;
        }//fim switch
        menu();
        cin>>opcao; cin.ignore();
    }
    return 0;
}