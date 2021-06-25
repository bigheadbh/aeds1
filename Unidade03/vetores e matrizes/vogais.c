#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define TAM 100

//Faça um algortimos para percorrer uma string e imprimir apenas as vogais.
void tio(char string[]){
    printf("\nImprime as vogais:\n");
    for(int i = 0; i < strlen(string); i++){
        switch(tolower(string[i])){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c", string[i]);
                break;
            case ' ':
                printf(" ");
                break;
        }
    }
    printf("\n\n");
}

//Faça um algortimos para percorrer uma string e imprimir a quantidade de caracteres maiusculos
void sukita(char string[]){
    printf("Conta maiúsculo:\n");
   int count = 0;
   for(int i = 0; i < strlen(string); i++){
       //if(string[i] == toupper(string[i]))
       //if(string[i] >= 65 && string[i] <= 90)
       //if(isupper(string[i]))
       if(string[i] >= 'A' && string[i] <= 'Z')
            count++;
   }     
   printf("A string possui %d caracteres maiúsculos.\n", count);   
   printf("\n");
}

//Faça um algoritmo para percorrer uma string e verificar a existência de um padrão
bool contem(char string[], char padrao[]){
    printf("Verifica padrão:\n");
    bool resp;
    for(int i = 0; i < (strlen(string) - strlen(padrao)); i++){
        resp = true;
        for(int j = 0; j < strlen(padrao); j++){
            if(string[i + j] != padrao[j]){
                resp = false;
                j = strlen(padrao);
            }
        }
        if(resp == true)
            i = strlen(string);
    }
    return resp;
}


//Faça um algoritmo para percorrer uma string e retornar o reverso da string
void inverso(char string){

}

int main(){
    char string[TAM], padrao[10];
    printf("Digite uma palavra:\n");
    scanf("%[^\n]s", string);
    printf("Digite o padrao:\n");
    scanf(" %[^\n]s", padrao);

    tio(string);
    sukita(string);
    if(contem(string, padrao) == true)
        printf("Existe um padrão na string.\n");
    else    
        printf("Não existe um padrão na string.\n");
    return 0;
}