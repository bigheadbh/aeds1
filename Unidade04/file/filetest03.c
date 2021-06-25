#include <stdio.h>
#include <string.h>

int main(){
    char linha[50], padrao[20];
    int nlinhas = 1;
    int npalavras = 0;
    //printf("Entre com uma palavra a ser pesquisada: ");
    //scanf("%s", padrao);

    FILE *fp = fopen("batata.txt", "r");
    //Verifica se o arquivo foi aberto corretamente
    if(fp == NULL){
        printf("Erro na abertura do arquivo!!\n");
        return -1;
    }

    while (!feof(fp)){
        fgets(linha, 50, fp);
        char *aux = strtok(linha," ,.;:!?\n\r\t");
        while(aux != NULL){
            npalavras ++;
            /*if(strstr(aux, padrao) != NULL)
                printf("O padrão foi encontrado na linha(%d) palavra(%s)\n", nlinhas, aux);
            if(strcmp(aux, padrao) == 0)
                printf("Palavra encontrada na linha: %d\n", nlinhas);*/
            aux = strtok(NULL, " ,.;:!?\n\r\t");
        }
        nlinhas++;

        
    }
    fclose(fp);
    printf("O arquivo contem %d palavras e %d linhas\n\n", npalavras, nlinhas);
    return 0;
}
