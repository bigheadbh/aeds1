#include <stdio.h>

/*
 * Faça um método recursivo que retorne a sequência de fibonacci.
*/

int fib(int n){
    int resp;
    if(n == 0 || n == 1 || n == 2)
        resp = 1;
    else    
        resp = fib(n - 1) + fib(n - 2);
    return resp;
}

int main(){
    int n;
    printf("Digite qual termo da série de Fibonacci deseja visualisar: ");
    scanf("%d", &n);
    printf("O termo %d da série de Fibonacci é = %d\n", n, fib(n));
    return 0;
}