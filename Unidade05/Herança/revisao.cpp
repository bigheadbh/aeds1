/*Implemente a classe Funcionario e a classe Gerente. 
a. crie a classe Assistente, que também é um funcionário, e que possui um número de matrícula (faça o método GET). Sobrescreva o método exibeDados(). 
b. sabendo que os Assistentes Técnicos possuem um bônus salarial e que os Assistentes Administrativos possuem um turno (dia ou noite) e um adicional noturno, crie as classes Tecnico e Administrativo.
*/

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

class Funcionario{
    public:
        string nome;
    protected:
        double salario;
    public:
        Funcionario(){
        }
};

class Gerente {
    public:
        Gerente(){
        }
};

class Assistente: public Funcionario{
    protected:
        int matricula;

    public:
        Assistente(){
            matricula = 0;
            salario = 0;
        }
        int getMatricula(){
            return matricula;
        }
        void ExibeDados(){
            cout << matricula << endl;
        }
};

class AssistenteTecnico: public Assistente {
    double bonus;
    public: 
        AssistenteTecnico(){
            salario = 0;
            matricula = 0;
            bonus = 0;
        }
        AssistenteTecnico(double salario, double bonus, int matricula){
            this->salario = salario;
            this->matricula = matricula;
            this->bonus = bonus;
        }
        void setBonus(){
            this->bonus = salario * 1.1;
        }
};

class AssistenteAdministrativo: public Assistente{
    public:
        enum Turno {NENHUM, DIA, NOITE};
    private:
        Turno turnoAssistete;
        double adicional;
    public: 
        AssistenteAdministrativo(){
            turnoAssistete = NENHUM;
            adicional = 0;
        }
        void setTurno(Turno turno){
            turnoAssistete = turno;
            if(turno = NOITE){
                salario = salario * 1.2;
            }
        }
};

int main(){
    Funcionario func[10];

    Funcionario *func1[10];  

    func[0].nome = "felipe";

    func1[0] = new Funcionario();
    func1[0]->nome = "Pedrinho";

    return 0;
}
