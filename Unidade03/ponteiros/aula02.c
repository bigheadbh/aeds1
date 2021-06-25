#include<stdio.h>
#include<stdlib.h>

/*
* Crie uma funçao que receba dois parametros: um array e um valor do
* mesmo tipo do array. A funçao devera preencher os elementos de array
* com esse valor. Nao utilize ındices para percorrer o array,
* apenas aritmética de ponteiros.
*/

void preencheVetor(int vetor[], int num){
    int *temp = vetor;
    for(int i = 0; i < 10; i++, temp++)
        *temp = num;
}

void printVetor(int vetor[]){
    int *temp = vetor;
    for (int i = 0; i < 10; i++, temp++)
        printf("%d\t", *temp);
    printf("\n");
}

int main(){
    int arranjo[10];
    int valor;
    printf("Entre com o valor pra o preenchimento:\t");
    scanf("%d", &valor);
    preencheVetor(arranjo, valor);
    printVetor(arranjo);
    return 0;
}
