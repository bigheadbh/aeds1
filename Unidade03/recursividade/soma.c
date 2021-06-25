#include <stdio.h>

/*
 * Escrever na tela o somatório ate n RECURSIVAMENTE
*/

int soma(int n){
    int resp;
    if(n == 1)
        resp = 1;
    else
        resp = n + soma(n-1);
    return resp;
}

int main(){
    int num;
    printf("Digite um número a ser somado com os seus antecessores: ");
    scanf("%d", &num);
    printf("A soma dos antecessores de %d é = %d\n", num, soma(num));
    return 0;
}