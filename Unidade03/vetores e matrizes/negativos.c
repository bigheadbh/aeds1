
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/*
 * Implemente uma função que receba como parâmetro um array de 
 * números reais de tamanho N e retorne quantos numeros negativos 
 * há nesse array. Essa função deve obedecer ao prototipo:
 * int negativos(float *vet, int N);
*/

float *negativos(float *vet, int N){
    float *vetorResp = (float*) malloc((N+1)*sizeof(float));
    int j = 0;
    memset(vetorResp, 0, (N+1)*sizeof(float));
    for(int i = 0; i < N; i++){
        if(vet[i] < 0){
            vetorResp[j] = vet[i];
            j++;
        }
    }
    return vetorResp;
}

int main(void){
    int n;
    printf("Entre com a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    float *vetor = (float *) malloc(sizeof(float)*n);

    printf("Entre com os %d elementos\n", n);
    for(int i = 0; i < n; i++)
        scanf("%f", &vetor[i]);

    float *resposta = negativos(vetor, n);
    printf("Valores negativos presentes: [\t");
    for (int i = 0; resposta[i] < 0; i++)
        printf("%g\t", resposta[i]);
    printf("]\n");
    return 0;
}
