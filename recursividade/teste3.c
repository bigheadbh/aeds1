#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a = 1, b = 2;
    swap(&a, &b);
    printf("%d\t%d\t", a, b);
    return 0;
}