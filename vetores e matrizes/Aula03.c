

/*Faça um programa que lê duas palavras do teclado e diz se elas são iguais ou diferentes. O programa deve dizer ainda se alguma das palavras digitadas é igual a “papagaio”.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/*
 * Implemente uma função que receba como parâmetro um array de 
 * números reais de tamanho N e retorne quantos numeros negativos 
 * há nesse array. Essa função deve obedecer ao prototipo:
 * int negativos(float *vet, int N);
 */ 
int negativos(float *vet, int N){
    int count = 0;
    for(int i = 0; i < N; i++)
        if(vet[i] < 0) count++;
    return count;
}

/* 
 * Fazer um programa para preencher uma matriz 
 * nXn e printar na tela a diagonal principal 
 * e secundária 
 */


int main(){
    /*char palavra1[20];
    char palavra2[20];

    printf("Entre com a primeira palavra:\n");
    scanf("%[^\n]s", palavra1);
    fflush(stdin);
    printf("Entre com a segunda palavra:\n");
    scanf(" %[^\n]s", palavra2);
    
    if(strcmp(palavra1, palavra2) == 0)
        printf("As palavras são iguais\n");
    else 
        printf("As palavras são diferentes!!!\n");

    if(strcasecmp(palavra1, "papagaio") == 0)
        printf("Palavra1 é igual a papagaio\n");
    if(strcasecmp(palavra2, "papagaio") == 0)
        printf("Palavra2 é igual a papagaio\n");

    //strstr 
    char *resposta = strstr(palavra1, palavra2);
    printf("%s->(%p) %s-> (%p)\n", palavra1, palavra1, resposta, resposta);
    */
    /*int n;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", n);
    float *vetor = (float *) malloc(sizeof(float) * n);
    for(int i = 0; i < n; i++){
        printf("Entre com o valor da posicao (%d): ", i+1);
        scanf("%f", &vetor[i]);
    }
    int count = negativos(vetor, n);*/

    int matriz[50][50];
    int N;
    printf("Entre com a dimensão da matriz: ");
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("Elemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal: [ ");
    for(int i = 0; i < N; i++)
        printf("%d ", matriz[i][i]);
    printf("]\n");

    printf("Diagonal secundária: [ ");
    for(int i = 0; i < N; i++)
        printf("%d ", matriz[i][N-1-i]);
    printf("]\n");

    return 0;
}
