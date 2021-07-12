#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    /*int idade;

    idade = 36;

    FILE *fp = fopen("int.txt", "w");
    fprintf(fp,"%d", idade);
    fclose(fp);

    FILE *fpbin = fopen("testebinario.bin", "wb");
    fwrite(&idade, sizeof(int), 1, fpbin);
    fclose(fpbin);

    int teste;
    fpbin = fopen("testebinario.bin", "rb");
    fread(&teste, sizeof(int), 1, fpbin);
    fclose(fpbin);

    printf("Valor que foi lido %d\n\n", teste);

    printf("sizeof(int) %ld\n", sizeof(int));
    printf("sizeof(char) %ld\n", sizeof(char));
    printf("sizeof(float) %ld\n", sizeof(float));
    printf("sizeof(double) %ld\n", sizeof(double));
    */

    int vetor[5] = {11,22,33,44,55};
    FILE *fpbin = fopen("testebinario.bin", "wb");
    fwrite(vetor, sizeof(int), 5, fpbin);
    fclose(fpbin);

    memset(vetor, 0, sizeof(int) * 5);
    fpbin = fopen("testebinario.bin", "rb");
    fread(vetor, sizeof(int), 5, fpbin);
    fclose(fpbin);

    for(int i = 0; i < 5; i++)
        printf("%d\n", vetor[i]);

    return 0;
}
