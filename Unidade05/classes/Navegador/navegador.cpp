#include "navegador.h"

Navegador::Navegador(){
    this->count = 0;
    this->guias = new Guia*[MAXTAM];
    this->guias[count] = new Guia("Google.com", "http://google.com");
    count ++;
}

void Navegador::abrirGuia(string titulo, string url){
    if(count < MAXTAM) {
        this->guias[count] = new Guia(titulo, url);
        count ++;
        cout<<"Guia aberta com sucesso!!!"<<endl;
    } else {
        cout<<"Limite de guias abertas simultaneamente alcançado!!!"<<endl;
    }
}

void Navegador::fecharGuia(int n){
    string resp;
    cout<<"Tem certeza que fechará esta esta guia?? [s/n]"<<endl;
    cin>>resp;
    if(resp == "s" || resp == "S"){
        if(guias[n] != NULL){
            delete guias[n];
            for(int i = 0; i < count; i++){
                cout<<guias[i]<<"\t";
            }
            count --;
            cout<<endl;
            for(int i = n; i < count; i++){
                guias[i] = guias[i+1];
            }
            cout<<endl;
            for(int i = 0; i < count; i++){
                cout<<guias[i]<<"\t";
            }
            cout<<"Guia finalizada com sucesso!!!"<<endl;
            getchar();
        }
    }
}

void Navegador::listarGuias(){
    for(int i = 0; i < count; i++)
        cout <<"["<<i<<"] "<<guias[i]->getTitulo()<<endl;
}
