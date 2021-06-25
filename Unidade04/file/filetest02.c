#include <stdio.h>

int main(){
    char c;
    int nlinhas = 0;
    FILE *fp = fopen("batata.txt", "r");

    //Verifica se o arquivo foi aberto corretamente
    if(fp == NULL){
        printf("Erro na abertura do arquivo!!\n");
        return -1;
    }

    //leitura de caracter
    //fscanf(fp, "%c", &c)
    //c = fgetc(fp)
    while ((c = fgetc(fp))!= EOF){
        printf("%c", c);    
        if (c == '\n')
            nlinhas++;
    }

    fclose(fp);
    printf("Numero de linhas = %d\n", nlinhas);
    return 0;
}
