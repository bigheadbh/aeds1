#include <stdio.h>

int contavogais(char *frase){
    //Se encontrar uma vogal checa a proxima letra, soma 1 ao resultado, e retorna a soma
    if (*frase == 'a' || *frase == 'A' ||
        *frase == 'e' || *frase == 'E' ||
        *frase == 'i' || *frase == 'I' ||
        *frase == 'o' || *frase == 'O' ||
        *frase == 'u' || *frase == 'U')
        return contavogais(++frase) + 1;
    //Senao, se encontrar o fim da frase/string retorna 0
    else if (*frase == '\0')
        return 0;
    //Senao apenas segue checando a proxima letra e retorna o resultado
    else
        return contavogais(++frase);
}

int main()
{
    char frase[] = "Esta";
    int total;
    
    total = contavogais(frase);
    printf("%d\n", total);

    return 0;
}