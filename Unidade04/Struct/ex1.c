#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TAM 2

typedef struct Aluno{//typedef define a estrutura como tipo
    char nome[50];
    char endereco[100];
    int idade;
    char cpf[12];
    float altura;
    float peso;
}Aluno;

void cadastra(Aluno *aluno){
    printf("Digite o nome do aluno:\n");
    scanf(" %[^\n]s", aluno->nome); // -> aponta para o aluno.nome
    printf("Digite o endereço: \n");
    scanf(" %[^\n]s", aluno->endereco);
    printf("Digite a idade: \n");
    scanf("%d", &aluno->idade);
    printf("Digite o cpf: \n");
    scanf("%s", aluno->cpf);
    printf("Digite a altura: \n");
    scanf("%f", &aluno->altura);
    printf("Digite o peso: \n");
    scanf("%f", &aluno->peso);
    fflush(stdin); //limpa o buffer
    printf("Pressione uma tecla para continuar......");
    getchar(); //despreza o caracter digitado
    system("clear"); //limpa a tela
}

void cadastraAluno(Aluno alunos[], int count){
    for(int i = 0; i < count; i++){
        cadastra(&alunos[i]);
    }
}

void mostrar(Aluno aluno){
    printf("%s ## ", aluno.nome);
    printf("%s ## ", aluno.endereco);
    printf("%d ## ", aluno.idade);
    printf("%s ## ", aluno.cpf);
    printf("%g ## ", aluno.altura);
    printf("%g ##\n", aluno.peso);
    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();
}

void mostrarAluno(Aluno alunos[], int count){
    for(int i = 0; i < count; i++){
        mostrar(alunos[i]);
    }
}

int pesquisar(Aluno alunos[], char nomeChave[], int count){
    bool resp = -1;
    for(int i = 0; i < count; i++){
        if(strcasecmp(alunos[i].nome, nomeChave) == 0){
            resp = i;
            i = count;
        }
    }
    return resp;
}

void menu(){
    system("clear");
    printf("Escolha uma das opções abaixo: \n");
    printf(" 1 - Cadastro do aluno \n");
    printf(" 2 - Mostrar todos os alunos \n");
    printf(" 3 - Pesquisar pelo nome do aluno \n");
    printf(" 4 - Gravar registros em arquivo \n");
    printf(" 5 - Ler registros do arquivo \n");
    printf(" 6 - Gravar registros em arquivo binário \n");
    printf(" 7 - Ler registros do arquivo binário \n");
    printf(" 8 - sair.... \n");
}

void gravarRegistros(Aluno alunos[], int count){
    FILE *fp = fopen("registro.txt", "w");
    for(int i = 0; i < count; i++){
        fprintf(fp, "%s ## ", alunos[i].nome);
        fprintf(fp, "%s ## ", alunos[i].endereco);
        fprintf(fp, "%d ## ", alunos[i].idade);
        fprintf(fp, "%s ## ", alunos[i].cpf);
        fprintf(fp, "%g ## ", alunos[i].altura);
        fprintf(fp, "%g ##\n", alunos[i].peso);
    }
    fclose(fp);
    printf("Registro criado com sucesso!\n");
    printf("Pressione uma tecla para continuar...\n");
    getchar();
}

void lerRegistros(Aluno alunos[], int *count){
    char buf[100];
    FILE *fp = fopen("registro.txt", "r");

    if(fp == NULL){
        printf("Erro na leitura do arquivo.\n");
        return;
    }

    fgets(buf, 100, fp);
    while(!feof(fp)){
        char *temp = strtok(buf, " ##");
        strcpy(alunos[*count].nome, temp);
        temp = strtok(NULL, " ##");
        strcpy(alunos[*count].endereco, temp);
        temp = strtok(NULL, " ##");
        alunos[*count].idade = atoi(temp); //asc to int
        temp = strtok(NULL, " ##");
        strcpy(alunos[*count].cpf, temp);
        temp = strtok(NULL, " ##");
        alunos[*count].altura = atof(temp); //asc to float
        temp = strtok(NULL, " ##\n");
        alunos[*count].peso = atof(temp); //asc to float
        *count = *count + 1;
        fgets(buf, 100, fp);
    }
    fclose(fp);
    printf("Leitura concluida!\n");
    printf("Pressione uma tecla para continuar...\n");
    getchar();
}

void gBin(Aluno aluno[], int count){
    FILE *fp = fopen("binario.txt", "wb");
    for(int i = 0; i < count; i++)
        fwrite(&aluno[i], sizeof(Aluno), 1, fp);
    //fwrite(alunos, sizeof(Aluno), count, fp);
    fclose(fp);
    fflush(stdin);
    printf("Pressione uma tecla para continuar...\n");
    getchar();
}

void lBin(Aluno aluno[], int *count){
    FILE *fp = fopen("binario.txt", "rb");
    while(fwrite(&aluno[*count], sizeof(Aluno), 1, fp) != 0){
        *count = *count + 1;
    }
    fclose(fp);
    fflush(stdin);
    printf("Pressione uma tecla para continuar...\n");
    getchar();
}

int main(){
    Aluno alunos[TAM]; // typedef descarta a necessidade do prefixo struct nesse ponto do código
    int opcao, count = 0;
    Aluno aluno;
    char nome[20];
    menu();
    scanf("%d", &opcao);
    while(opcao != 8){
        switch(opcao){
            case 1:
                if(count < TAM){
                    system("clear");
                    cadastraAluno(&aluno, count);
                    alunos[count] = aluno;
                    count++;
                } else {
                    printf("Sem espaço filhão!!!\n");
                }
                break;
            case 2:
                mostrarAluno(alunos, count);
                fflush(stdin);
                getchar();
                break;
            case 3:
                printf("Digite um nome a ser pesquisado: ");
                scanf("%[^\n]s", nome);
                int resp = pesquisar(alunos, nome, count);
                if(resp >= 0)
                    mostrar(alunos[resp]);
                else 
                    printf("O nome %s não está cadastrado.\n", nome);
                break;
            case 4:
                printf("Registros serão gravados no arquivo...\n");
                fflush(stdin);
                getchar();
                gravarRegistros(alunos, count);
                break;
            case 5:
                printf("Lendo dados do arquivo...\n");
                lerRegistros(alunos, &count);
                fflush(stdin);
                getchar();
                break;
            case 6:
                printf("Registros serão gravados no arquivo binário...\n");
                gBin(alunos, count);
                fflush(stdin);
                getchar();
                break;
            case 7:
                printf("Lendo dados do arquivo...\n");
                lBin(alunos, &count);
                break;
            default:
                printf("Opção inválida!!!\n");
        }
        menu();
        scanf("%d", &opcao);
    }
    return 0;
}