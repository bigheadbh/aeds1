#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAM 3

/*
 * Crie um programa que permita armazenar o nome, a altura e da data de nascimento de até 10 pessoas. 
 * Cada pessoa deve ser representada por uma struct dentro de um vetor.
 * A data de nascimento também deve ser uma struct. O nome e a altura de cada pessoa devem ser informados pelo teclado. 
 * A geração da data de nascimento deve ser feita aleatoriamente através da função abaixo.
*/

typedef struct Data{
    short dia;
    short mes;
    short ano;
}Data;

typedef struct Pessoa{
    char nome[30];
    float altura;
    Data nascimento;
}Pessoa;

void gerarData(Data *dataNascimento){
    srand(time(NULL)); //
    dataNascimento -> dia = rand()%31 + 1; //rand gera um número aleatório
    dataNascimento -> mes = rand()%12 + 1;
    dataNascimento -> ano = 1950 + (rand() % 71);
}

void mostrarPessoa(Pessoa p){
    printf("Nome: %s\n", p.nome);
    printf("Altura: %g\n", p.altura);
    printf("Data de Nascimento: %02d/%02d/%d\n", p.nascimento.dia, p.nascimento.mes, p.nascimento.ano);
}

void cadastraPessoa(Pessoa *p){
    printf("Entre com o nome: ");
    scanf(" %[^\n]s", p->nome);
    printf("Entre com a altura: ");
    scanf("%f", &p->altura);
    gerarData(&p->nascimento);
    fflush(stdin);
}

void pesquisarPessoa(Pessoa *p, int num, char *nome){
    for(int i = 0; i < num; i++){
        if(strcmp(p[i].nome, nome) == 0){
            printf("Registro encontrado!\n");
            mostrarPessoa(p[i]);
            getchar();
        }
    }
}

void mediaAlturaPessoa(Pessoa *p, int num){
    float soma = 0;
    for(int i = 0; i < num; i++){
        soma += p[i].altura;
    }
    printf("A média de altura é = %g\n", soma/num);
}

void pause(){
    getchar();
    system("clear");
}

int main(){
    //Pessoa *vetor = (Pessoa *) malloc(sizeof(Pessoa) * TAM);
    Pessoa vetor[TAM];
    for(int i = 0; i < TAM; i++){
        cadastraPessoa(&vetor[i]);
    }
    pause();
    for (int i = 0; i < TAM; i++){
        mostrarPessoa(vetor[i]);
    }

    pause();
    char nome[20];
    printf("Digite um nome a ser pesquisado: ");
    scanf(" %[^\n]s", nome);
    pesquisarPessoa(vetor, TAM, nome);

    pause();
    mediaAlturaPessoa(vetor, TAM);
    
    return 0;
}