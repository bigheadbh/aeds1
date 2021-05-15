
/* Escreva um programa que leia um vetor G de 20 caracteres que representa o gabarito de uma prova. A seguir, para cada um dos alunos de uma turma, leia o vetor de respostas (R) e conte o número de acertos. Mostre a nota do aluno e uma mensagem APROVADO, se a nota for maior ou igual a 6 ou REPROVADO, caso contrário. Cada questão correta vale 0,5 ponto. */

#include<stdio.h>
#include<stdlib.h>

#define TAM 20

int main(void)
{
    char gabarito[TAM];
    char respostas[5][TAM];
    int nota = 0;
    int resultado[5];

    for (int i = 0; i < TAM; i++){
        ​​printf("Entre com o gabarito da questao [%d]:", i + 1);
        scanf(" %c", &gabarito[i]);
        system("cls");
    }

    ​​
    for (int i = 0; i < 5; i++){
        ​​printf("\n*********************************************\n");
        printf("            RESPOSTA ALUNO %d\n", i + 1);
        nota = 0;
        for (int j = 0; j < TAM; j++){
            ​​printf("Entre com a alternativa da questao [%d]:", j + 1);
            scanf(" %c", &respostas[i][j]);
            if (gabarito[j] == respostas[i][j])
                nota++;
        }
        resultado[i] = nota;
    }
    ​​
    printf("\n**************************************");
    printf("\n*               Resultados");
    printf("\n**************************************");
    for (int i = 0; i < 5; i++){
        if (resultado[i] * 0.5 >= 6){
            printf("\nCandidato %d Aprovado!!", i + 1);
        } else {
            printf("\nCandidato %d Reprovado!!", i + 1);
        }
    }
​​
    printf("\n\n**************************************");
    printf("\n*               GABARITO");
    printf("\n**************************************");
    for (int i = 0; i < TAM; i++)
        printf("\n[%d]:%c", i + 1, gabarito[i]);

    return 0;
}
​​