#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10;
    int b = 20;
    printf("O valor de a(%d) e b(%d)\n", a, b);
    swap(&a,&b);
    printf("O valor de a(%d) e b(%d)\n", a, b);
    return 0;
}