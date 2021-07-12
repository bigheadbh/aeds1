#include<iostream>
#include"televisao.h"
using namespace std;

void menu(){
    system("cls || clear");
    cout<<" 1 - Para aumentar o volume"<<endl;
    cout<<" 2 - Para abaixar o volume"<<endl;
    cout<<" 3 - Para aumentar o canal"<<endl;
    cout<<" 4 - Para decrementar o canal"<<endl;
    cout<<" 5 - Para setar um canal"<<endl;
    cout<<" 6 - Verificar status..."<<endl;
    cout<<" 7 - Para desligar a TV..."<<endl;
}

int main(){
    int opcao;
    Televisao *t1 = new Televisao(10);
    menu();
    cin>>opcao;
    cin.ignore();
    while(opcao != 7){
        switch (opcao){
            case 1:
                cout<<"Aumentando o Volume..."<<endl;
                t1->volumeUp();
                cout<<"Novo volume: "<<t1->getVolume()<<endl;
                getchar();
                break;
            case 2:
                cout<<"Diminuindo o Volume..."<<endl;
                t1->volumeDown();
                cout<<"Novo volume: "<<t1->getVolume()<<endl;
                getchar();
                break;
            case 3:
                cout<<"Incrementando o canal..."<<endl;
                t1->channelUp();
                cout<<"Novo canal: "<<t1->getChannel()<<endl;
                getchar();
                break;
            case 4:
                cout<<"Decrementando o canal..."<<endl;
                t1->channelDown();
                cout<<"Novo canal: "<<t1->getChannel()<<endl;
                getchar();
                break;
            case 5:
                cout<<"Entre com o novo canal..."<<endl;
                int canal;
                cin>>canal;
                cin.ignore();
                t1->setChannel(canal);
                cout<<"Novo canal: "<<t1->getChannel()<<endl;
                getchar();
                break;
            case 6:
                cout<<"Canal: "<<t1->getChannel()<< "\t Volume:"<<t1->getVolume()<<endl;
                getchar();
        }
        menu();
        cin>>opcao;
        cin.ignore();
    }
    return 0;
}
