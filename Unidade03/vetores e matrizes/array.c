#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void string(char *arr){
    //strrev(arr);
    printf("Frase: %s\n", arr);
}

int main(void){
    int size = 0;
    char arr[size];

    printf("Entre com o tamanho do array:\n");
    scanf("%d", &size);
    fflush(stdin);

    printf("Entre com uma frase:\n");
    scanf(" %[^\n]s", arr);

    string(arr);

    char teste[] = "Luca Lourenço";
    string(arr);
    string(teste);

    printf("tamanho de arr %ld\n", strlen(arr));

    return 0;
}