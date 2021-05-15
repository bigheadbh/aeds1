#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nome[20] = "Felipe Cunha";
    char nome1[20];

    //Leitura da string pelo teclado
    //printf("Entre com o nome: ");
    //scanf("%[^\n]s", nome);
    //printf("%s\n", nome);

    //strlen para print na tela usando aritmetica de ponteiros
    char * temp = nome;
    for(int i = 0; i < strlen(nome); i++, temp++)
        printf("%c", *temp);
    printf("\n");
    
    //cortar a string na posicao 6 com o \0
    nome[6]='\0';
    temp = nome;
    for (int i = 0; *temp!='\0'; i++, temp++)
        printf("%c", *temp);
    printf("\n");

    //copiar o conteudo de uma string para outra
    strcpy(nome1,nome);
    printf("%s\n", nome1);
    strcpy(nome1, "hoje é quarta");
    printf("STRCPY:: %s\n", nome1);

    //copiar o conteudo de n bytes de uma string para outra
    strncpy(nome, nome1, 4);
    printf("STRNCPY:: %s\n", nome);

    //troca do valor de caracteres
    for(int i = 0; i < strlen(nome); i++){
        if(nome[i] == 'e'){
            nome[i] = 'x';
        }
    }
    printf("REPLACE:: %s\n", nome);

    //strcmp compara o conteudo de duas strings
    if(strcmp(nome, "hojxpx") == 0)
        printf("São iguais!!\n");
    else
        printf("não sao iguais!!\n");

    printf("strcmp(amor, beijo) = %d\n", strcmp("amor", "beijo"));

    strcpy(nome, "hoje ");
    strcpy(nome1, "beijo");
    printf("strcmp(hoje, beijo) = %d\n", strcmp(nome, nome1));

    //strrev inverte o conteudo que funciona no windows apenas
    //printf("%s", strrev(nome1));

    //strcat concatena duas strings
    strcat(nome, nome1);
    printf("%s\n\n", nome);

    //strtok para dividir uma frase em palavras(tokens)
    char frase[]="no#meio; do caminho, tinha uma pedra";
    char *aux = strtok(frase, " ;,#");
    while(aux != NULL){
        printf("%s\n", aux);
        aux = strtok(NULL, " ;,#");
    }
    return 0;
}