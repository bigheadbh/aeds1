#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char linha[50];
    //abrindo o arquivo
    FILE *fp = fopen("batata01.txt", "a+w");
    //leitura de dados do arquivo
    while (fgets(linha, 50, fp) != NULL)
        puts(linha);
    
    printf("Entre com a linha: ");
    scanf("%[^\n]s", linha);
    
    //escever no arquivo
    //fputs(linha, fp);
    //fprintf(fp,"%s\n", linha);
    //fwrite(linha, 1, strlen(linha), fp);
    //fputc('A', fp);

    //fechar o arquivo
    fclose(fp);
    return 0;
}

