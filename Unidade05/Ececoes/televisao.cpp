#include<iostream>

using namespace std;

class TratarDivisao{
    private:
        int line;

    public:
        TratarDivisao(int line);
        void Msg();
};

TratarDivisao::TratarDivisao(int line){
    this->line = line;
}

void TratarDivisao::Msg(){
    cout << "Falha: Execeção ocorrida na linha: " << line << endl;
}

int main(){
    double *ptr = NULL;

    try{
        while(1){
            cout << "Tenta alocar..." << endl; 
            ptr = new double [5000000];
        }
    } catch (bad_alloc E){
        cout << "deu erro na alocação!!!" << endl;
    }

    cout << "FIM..." << endl;
    return 0;
}

