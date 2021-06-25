#include <stdio.h>

/* 
 * Escrever na tela a tabuada de 5 com 10 valores RECURSIVAMENTE
*/

int tab(int num, int n){
    int resp;
    if(n == 0)
        resp = 0;
    else 
        resp = num + tab(num, n - 1);
    printf("%d X %d = %d\n", num, n, resp);
    return resp;
}

int main(){
    int num;
    printf("Entre com o número desejado: ");
    scanf("%d", &num);
    tab(num, num);
    return 0;
}