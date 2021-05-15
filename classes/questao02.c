
/* 
    Faça um programa em C para ler e manipular informações de um cadastro de automóveis. São necessárias duas estruturas: carro e proprietario. Todos os dados de um carro devem ser lidos e depois impressos. Os campos das estruturas são: 
    carro: modelo(char), ano(int), placa (char), proprietario (proprietario);
    proprietario: cpf(long int), nome(char).
*/

#include<stdlib.h>
#include<stdio.h>

typedef struct Proprietario{
    char nome[20];
    long int cpf;
}Proprietario;

typedef struct Carro{
    char modelo[15];
    int ano;
    char placa[10];
    Proprietario proprietario;
}Carro;


int main(){
    Carro c1;
    printf("Cadastro de Automoveis\n");
    printf("Digite o nome do proprietario:\n");
    scanf("%s", c1.proprietario.nome);
    printf("Digite o CPF do proprietario:\n");
    scanf(" %ld", &c1.proprietario.cpf);
    printf("Digite o modelo do carro:\n");
    scanf("%s", c1.modelo);
    printf("Digite o ano do carro:\n");
    scanf(" %d", &c1.ano);
    printf("Digite a placa do carro:\n");
    scanf("%s", c1.placa);

    printf("Cadastro de Automoveis\n");
    printf("Nome do proprietario: %s\n", c1.proprietario.nome);
    printf("CPF do proprietario: %ld\n", c1.proprietario.cpf);
    printf("Modelo do carro: %s\n", c1.modelo);
    printf("Ano do carro: %d\n", c1.ano);
    printf("Placa do carro: %s\n", c1.placa);

    return 0;
}
