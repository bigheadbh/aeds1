#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char arqOrigem[30], palavraOld[30], palavraNew[30];
    char linha[100];
    printf("Entre com o nome do arquivo de origem: ");
    scanf("%s", arqOrigem);
    printf("Entre com a palavra a ser substituida: ");
    scanf("%s", palavraOld);
    printf("Entre com a palavra nova: ");
    scanf("%s", palavraNew);

    FILE *fp = fopen(arqOrigem, "r");

    if(fp == NULL){
        printf("Erro na abertura do arquivo!!\n");
        return -1;
    }

    while(fgets(linha, 100, fp) != NULL){
        char *tmp = strtok(linha, " ,.:;!?\n\r\t");
        while(tmp != NULL){
            if(strcmp(tmp, palavraOld) == 0)
                printf("%s ", palavraNew);
            else 
                printf("%s ", tmp);
            tmp = strtok(NULL, " ,.:;?!\n\r\t");
        }
        printf("\n");
    }

    fclose(fp);
    return 0;
}