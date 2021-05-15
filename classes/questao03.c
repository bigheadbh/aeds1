
/*Faça um programa que receba dois arquivos do usuário, e crie um terceiro arquivo com  o conteudo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do  segundo).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char facilitador[200], nomeArquivo01[20],
        nomeArquivo02[20];
        
    printf("\n Insira o nome do primeiro arquivo: ");
    scanf("%s", nomeArquivo01);

    printf("\n Insira o nome do segundo arquivo: ");
    scanf("%s", nomeArquivo02);

    FILE *arquivo;
    FILE *junto;

    arquivo = fopen(nomeArquivo01, "r");
    junto = fopen("junto.txt", "w");
    while(!feof(arquivo)){
        fgets(facilitador, 200, arquivo);
        fprintf(junto,"%s", facilitador);
    }
    fclose(arquivo);

    arquivo = fopen(nomeArquivo02, "r");
    while(!feof(arquivo)){
        fgets(facilitador, 200, arquivo);
        fprintf(junto,"%s\n", facilitador);
    }
    fclose(arquivo);
    fclose(junto);

    return 0;
}
