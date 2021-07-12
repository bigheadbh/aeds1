#include<iostream>
#include"loja.h"
#include"item.h"

using namespace std;

void menu(){
    system("cls || clear");
    cout<<"1 - Para adicionar Item" << endl;
    cout<<"2 - Para mostrar Item" << endl;
    cout<<"3 - Para sair"<<endl;
    cout<<"Entre com uma opcao: ";
}

int main(){
    Loja *loja = new Loja();
    int opcao;
    menu();
    cin>>opcao; cin.ignore();
    while(opcao !=3){
        switch (opcao){
        case 1:
            if(loja->getCount() < 5){
                loja->addItem();
            }
            break;
        case 2:
            loja->showItens();
            break;
        }
        menu();
        cin>>opcao; cin.ignore();
    }
    return 0;
}
