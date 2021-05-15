#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char palavra1[30], palavra2[30];
    printf("Entre com a primeira palavra:\n");
    scanf("%[^\n]s", palavra1);
    printf("Entre com a segunda palavra:\n");
    setbuf(stdin,NULL);
    scanf("%[^\n]s", palavra2);

    if(strcasecmp(palavra1, palavra2) == 0){
        printf("Palavras iguais...\n");
    }else {
        printf("Palavras diferentes...\n");
    }

    if(strcasecmp(palavra1, "papagaio") == 0)
        printf("Primeira palavra igual a papagaio...\n");

    if(strcasecmp(palavra2, "papagaio") == 0)
        printf("Segunda palavra igual a papagaio...\n");

    return 0;
}