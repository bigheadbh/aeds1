#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define TAM 1000

/* 
 * Faça um algoritmo para percorrer uma string 
 * e imprimir apenas as vogais. 
 */
void printVogais(char frase[]){
    for (int i = 0; i < strlen(frase); i++){
        char c = tolower(frase[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            printf("%c", frase[i]);
    }
}

/* 
 * Faça um algoritmo para percorrer uma string 
 * e imprimir a quantidade de caracteres minusculos
 */
//if(tolower(*ptr) == *ptr)
//if(islower(a[i]))
//if(frase[i] >= 'a' && frase[i] <= 'z')
//if(frase[i] >= 97 && frase[i] <= 122)
int countMinusculas(char frase[]){
    int count = 0;
    for (int i = 0; i < strlen(frase); i++)
        if (frase[i] >= 97 && frase[i] <= 122)
            count++;
    return count;
}

/* 
 * Faça um algoritmo para percorrer uma string 
 * e imprimir a quantidade de caracteres maiusculos
 */
int countMaiusculas(char frase[]){
    int count = 0;
    for (int i = 0; i < strlen(frase); i++)
        if (frase[i] >= 65 && frase[i] <= 90)
            count++;    
    return count;
}

/* 
 * Faça um algoritmo para percorrer uma string 
 * e retornar o reverso da string
 */
char* reverter(char frase[]){
    char newFrase[TAM]=" ";
    int i;
    for (i = 0; i < strlen(frase); i++)        
        newFrase[i] = frase[strlen(frase)-1-i];
    newFrase[i] = '\0';
    return strdup(newFrase);
}

/* 
 * Faça um algoritmo para percorrer uma string 
 * e retornar se a string é ou não palindromo
 */
bool isPalindromo(char frase[]){
    bool resp = false;
    if(strcmp(frase, reverter(frase)) == 0)
        resp = true;
    return resp;
}

/* 
 * Faça um algoritmo para percorrer uma string 
 * e verificar a existencia de um padrao
 */
bool contains(char string[], char padrao[]){
    bool resp;
    for (int i = 0; i < (strlen(string) - strlen(padrao)); i++){
        resp = true;
        for (int j = 0; j < strlen(padrao); j++){
            if (string[i + j] != padrao[j]){
                resp = false;
                j = strlen(padrao);
            }
        }
        if (resp == true)
            i = strlen(string);
    }
    return resp;
}


int main(){
    char frase[TAM];
    //leitura da palavra pelo teclado
    printf("Entre com a frase: \n");
    scanf("%[^\n]s", frase);
    
    return 0;
}
