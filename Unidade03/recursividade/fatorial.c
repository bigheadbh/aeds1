#include <stdio.h>
/*
 * Escrever na tela o Fatorial de n RECURSIVAMENTE
*/

int fatorial(int n){
    int resp;
    if(n == 1){
        resp;
    } else{  
        resp = n * fatorial(n-1);
    }
    return resp;
}

int main(){
    int num;
    printf("Digite o número a ter o seu fatorial calculado: ");
    scanf("%d", &num);
    printf("O fatorial de %d é = %d\n", num, fatorial(num));
    return 0;
}