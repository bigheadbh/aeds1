#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void){
    char arq[50];
    char qst[50], palavraOld[20];
    char qstNew[50], palavraNew[20];

    printf("Entre com o nome do arquivo: ");
    scanf("%s", arq);
    printf("Entre com a palavra a ser substituida: ");
    scanf("%s", palavraOld);
    printf("Entre com a palavra que vai substituir: ");
    scanf("%s", palavraNew);
    memset(qst, 0, 50);
    memset(qstNew, 0, 50);
   
    FILE *fp = fopen(arq, "r");
    if(fp = NULL){
        printf("Falha ao abrir o arquivo!!");
        return -1;
    }
    
    memset(qst, 0, 50);
    memset(qstNew, 0, 50);
    while(fgets(qst, 50, fp) != NULL){
        char *temp = strtok(qst, " ,.:;?!\n\r\t");
        while(temp != NULL){     
            if(strcmp(temp, palavraOld) == 0){
                strcat(qstNew, palavraNew);
            }else{
                strcat(qstNew, temp);
            }
            strcat(qstNew, " ");
            temp = strtok(NULL, " ,.:;?!\n\r\t");
        }
        strcat(qstNew, "\n");
        printf("%s", qstNew);
        memset(qst, 0, 50);
        memset(qstNew, 0, 50);
    }
    fclose(fp);
    return 0;
}