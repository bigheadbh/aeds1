
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

/* 
 * Abrir o arquivo solicitado pelo usuario, 
 * printar as palavras separadas e ao final o 
 * total de consoantes e vogais!! 
 */

bool isVogal(char c){
    bool resp = false;
    if(toupper(c) == 'A' || toupper(c) == 'E' || toupper(c) == 'I' ||
    toupper(c) == 'O' || toupper(c) == 'U')
        resp = true;
    return resp;
}


int main(){
    char nomeArquivo[20];
    printf("Entre com o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    FILE *fp = fopen(nomeArquivo, "r");
    if(fp == NULL){
        printf("Erro na abertura do arquivo!!\n");
        return -1;
    }

    char buffer[100], newbuffer[100];
    char palavraOld[20], palavraNew[20];
    printf("Entre com a palavra a ser substituída: ");
    scanf("%s", palavraOld);
    printf("Entre com a palavra a que substituirá: ");
    scanf("%s", palavraNew);

    memset(buffer, 0, 100);
    memset(newbuffer, 0, 100);
    while(fgets(buffer, 100, fp) != NULL){
        char *temp = strtok(buffer, " ,.:;?!\n\r\t");
        while(temp != NULL){
            if(strcmp(temp, palavraOld) == 0){
                strcat(newbuffer, palavraNew);
            } else {
                strcat(newbuffer, temp);
            }
            strcat(newbuffer, " ");
            temp = strtok(NULL, " .,:;?!\r\n\t");
        }
        strcat(newbuffer, "\n");
        printf("%s", newbuffer);
        memset(buffer, 0, 100);
        memset(newbuffer, 0, 100);
    }
    fclose(fp);
    return 0;
}