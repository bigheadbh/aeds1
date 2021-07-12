#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printRecursivo(FILE *fp){
    char linha[100];
    if(fgets(linha, 100, fp) != NULL){
        printf("%s", linha);
        printRecursivo(fp);
    }
}

void printFileRec(char filename[]){
    FILE *fp = fopen(filename, "r");
    printRecursivo(fp);
    fclose(fp);
}

void printFile(char filename[]){
    FILE *fp = fopen(filename, "r");
    char linha[100];
    fgets(linha, 100, fp);
    while(!feof(fp)){
        printf("%s", linha);
        fgets(linha, 100, fp);
    }
    fclose(fp);
}

int main(){
    char nomeArquivo1[20], nomeArquivo2[20];
    char linha1[100], linha2[100];
    printf("Entre com o nome do primeiro arquivo\n");
    scanf("%s", nomeArquivo1);
    printf("Entre com o nome do segundo arquivo\n");
    scanf("%s", nomeArquivo2);
    FILE *fp1 = fopen(nomeArquivo1, "r");
    FILE *fp2 = fopen(nomeArquivo2, "r");
    FILE *out = fopen("saida.txt", "w");
    if(fp1 == NULL || fp2 == NULL){
        printf("Erro na abertura dos arquivos\n");
        return -1;
    }

    fgets(linha1, 100, fp1);
    fgets(linha2, 100, fp2);
    while(!feof(fp1) && !feof(fp2)){
        if(strcmp(linha1, linha2) < 0){
            fputs(linha1, out);
            fgets(linha1, 100, fp1);
        } else {
            fputs(linha2, out);
            fgets(linha2, 100, fp2);
        }
    }

    if(feof(fp1)){
        while(!feof(fp2)){
            fputs(linha2, out);
            fgets(linha2, 100, fp2);
        }
    }

    if(feof(fp2)){
        while(!feof(fp1)){
            fputs(linha1, out);
            fgets(linha1, 100, fp1);
        }
    }
    fclose(out);
    fclose(fp1);
    fclose(fp2);

    printFileRec("saida.txt");

    return 0;
}
