#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * replace(char linha[], char palavraOld[], char palavraNew[]){
    char *newlinha = (char*) malloc(100*sizeof(char));
    char *aux = strtok(linha, " ,.:?!\n\r\t");
    while(aux != NULL){
        if(strcmp(aux, palavraOld) == 0)
            strcat(newlinha, palavraNew);
        else 
            strcat(newlinha, aux);
        strcat(newlinha, " ");
        aux = strtok(NULL, " ,.:?!\n\r\t");
    }
    strcat(newlinha, "\n");
    return newlinha;
}

int main(){
    char nomeArquivo[30], buffer[100];
    char palavraOld[30], palavraNew[30];
    printf("Entre com o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    FILE *fp = fopen(nomeArquivo, "r");
    if(fp == NULL){
        printf("Erro na abertura do arquivo!!\n");
        return -1;
    }
    printf("Entre com a palavra a ser substituida: ");
    scanf("%s", palavraOld);
    printf("Entre com a palavra a nova palavra: ");
    scanf("%s", palavraNew);
    
    char *temp;
    while(!feof(fp)){
        fgets(buffer, 100, fp);
        temp = replace(buffer, palavraOld, palavraNew);
        memset(buffer, 0, 100);
        printf("%s", temp);
    }

    fclose(fp);
    return 0;
}