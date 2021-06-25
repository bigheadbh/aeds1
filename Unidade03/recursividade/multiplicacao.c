#include <stdio.h>

/* 
 * Escrever na tela a multiplicação de valores por soma sucessivas RECURSIVAMENTE
*/

int multiplicacao(int num, int num1, int i){
    int resp = 0;
    if(i < num1)
        resp = num + multiplicacao(num, num1, i + 1);
    return resp;
}

int main(){
    int num, num1, i = 0;
    printf("Entre com um número: ");
    scanf("%d", &num);
    printf("Entre com outro número: ");
    scanf("%d", &num1);
    printf("Valor da multiplicação entre %d e %d = %d\n", num, num1, multiplicacao(num, num1, i));
    return 0;
}