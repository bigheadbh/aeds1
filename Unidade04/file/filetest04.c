#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    char buf[100];
    char arquivoOrigem[30], arquivoDestino[30];
    printf("Entre com o nome do arquivo de origem: ");
    scanf("%s", arquivoOrigem);
    printf("Entre com o nome do arquivo de destino: ");
    scanf("%s", arquivoDestino);

    FILE *fp = fopen(arquivoOrigem, "r");
    FILE *fpdest = fopen(arquivoDestino, "w");

    if(fp == NULL)
        printf("Erro ao abrir o arquivo de origem.\n");

    while (!feof(fp)){
        fgets(buf, 100, fp);
        fputs(buf, fpdest);
        memset(buf, 0, 100);
    }

    fclose(fpdest);
    fclose(fp);
    return 0;
}