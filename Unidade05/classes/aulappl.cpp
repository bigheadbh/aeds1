
#include<iostream>
#include<string> 
using namespace std;

class Aluno {
    private:
        string nome;
        int serie;
        int grau;
        static int count;
    public:
        Aluno(){
            nome = "";
            serie = 0;
            grau = 0;
        }
        Aluno(string nome, int serie, int grau){
            this->nome = nome;
            this->serie = serie;
            this->grau = grau;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        string getNome(){
            return nome;
        }
        void setSerie(int serie){
            this->serie = serie;
        }
        int getSerie(){
            return serie;
        }
        void setGrau(int grau){
            this->grau = grau;
        }
        int getGrau(){
            return grau;
        }
        void cadastrarAluno(){
            system("cls || clear");
            cout << "Entre com o nome do aluno" << endl;
            getline(cin,nome);
            cout << "Entre com a serie do aluno" << endl;
            cin >> serie;
            cout << "Entre com o grau do aluno" << endl;
            cin >> grau;
            count ++;
        }
        void mostrarAluno(){
            cout << "Nome: " << nome << "\t";
            cout << "Serie: " << serie << "\t";
            cout << "Grau: " << grau << endl;
        }
        void countAlunos(){
            cout << "Numero de aluns cadastrados: "<<count<<endl;
        }
};

int Aluno::count = 0;

void menu(){
    system("cls || clear");
    cout << " ******** Menu de Opções ********* "<<endl;
    cout << "1 - para cadastrar aluno" <<endl;
    cout << "2 - para exibir os alunos cadastrados" <<endl;
    cout << "3 - para pesquisar por serie" << endl;
    cout << "4 - para pesquisar por nome" << endl;
    cout << "5 - para sair" <<endl;
}

int main(){
    int opcao;
    Aluno *aluno[10];
    int qtde = 0; 
    int serie;
    string nome;
    menu();
    cin >> opcao; cin.ignore();
    while(opcao != 5){
        switch(opcao){
            case 1:
                if(qtde < 10){
                    aluno[qtde] = new Aluno();
                    aluno[qtde]->cadastrarAluno();
                    qtde ++;
                } else {
                    cout << "Erro... não há mais espaço para cadastro!!" << endl;
                }
                break;
            case 2:
                for(int i = 0; i < qtde; i++)
                    aluno[i]->mostrarAluno();
                break;
            case 3:
                cout << "Entre com a serie para pesquisar!!" << endl;
                cin >> serie; cin.ignore();
                for(int i = 0; i < qtde; i++){
                    if(serie == aluno[i]->getSerie())
                        aluno[i]->mostrarAluno();
                }
                break;
            case 4:
                cout << "Entre com um nome para pesquisar!!" << endl;
                getline(cin, nome);
                for(int i = 0; i < qtde; i++){
                    string nome_aluno = aluno[i]->getNome();
                    if(nome_aluno.compare(nome) == 0){
                        aluno[i]->mostrarAluno();
                        i = qtde;
                    }
                }
                break;
        }
        getchar();
        menu();
        cin >> opcao;cin.ignore();
    }
    return 0;
}