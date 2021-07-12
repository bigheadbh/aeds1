#include<stdio.h>
#include<stdlib.h>
#define TAM 3

void preencheMatriz(int Matriz[TAM][TAM]){
    printf("Entre abaixo com os elementos da Matriz\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Elemento linha: %d colunha: %d = ", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    }
}

void printMatriz(int Matriz[TAM][TAM]){
    system("cls || clear");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++)
            printf("%d\t", Matriz[i][j]);
        printf("\n");
    }
}

int getSomaMatriz(int Matriz[TAM][TAM]){
    int soma = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++)
            soma += Matriz[i][j];
    }
    return soma;
}

int getSomaDiagPrincipal(int Matriz[TAM][TAM]) {
    int somaDiagPrincipal = 0;
    for (int i = 0; i < TAM; i++)
        somaDiagPrincipal += Matriz[i][i];
    return somaDiagPrincipal;
}

int getSomaDiagSecundaria(int Matriz[TAM][TAM]){
    int somaDiagSecundaria = 0;
    for(int i = 0, j = TAM-1; i < TAM ; i++ , j--){
        somaDiagSecundaria += Matriz[i][j];
    }
    return somaDiagSecundaria;
}

int main(){
    int Matriz1[3][2] = {{1,1},{1,1},{1,1}};
    int Matriz2[2][3] = {{1,1,1},{1,1,1}};

    int Matriz[2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            Matriz[i][j] = 0;
            for(int k = 0; k < 3; k++){
                Matriz[i][j] += Matriz1[k][i] * Matriz2[j][k];
            }
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\t", Matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}