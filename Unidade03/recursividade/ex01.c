#include<stdio.h>
#include<stdlib.h>

/*
 * Implemente uma função recursiva que, dados dois números inteiros x e n, calcula o valor de x^n 
 * exp(x, n) = 1              , se n = 0
 *           = x * exp(x,n-1) , se n > 0
 */ 
int expo(int x, int n){
    int resposta;
    if(n == 0){
        resposta = 1;
    } else {
        resposta = x * expo(x, n-1);
    }
    return resposta;
}

/*
 * Escrever na tela a tabuada de 5 com 10 valores RECURSIVAMENTE
 */
int tabuada(int num, int n){
    int resposta;
    if(n == 0){
        resposta = 0;    
    } else {
        resposta = num + tabuada(num, n-1);
    }
    printf("%d X %d = %d\n", num, n, resposta);
    return resposta;
}

/*
 * T(0) = 1
 * T(1) = 1
 * T(2) = 1
 * T(n) = T(n-1) + T(n-2) + T(n-3)
 */
int serie(int n){
    int resposta;
    if(n == 0 || n == 1 || n == 2){
        resposta = 1;
    }else {
        resposta = serie(n - 1) + serie(n - 2) + serie(n - 3);
    }
    return resposta;
}




int main(){
    return 0;
}



