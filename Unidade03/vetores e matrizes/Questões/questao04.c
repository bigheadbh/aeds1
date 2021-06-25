/* 
    Faça um programa que leia um vetor com os dados de 5 carros: marca (maximo 15 letras), ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor que p. Repita este processo ate que seja lido um valor p = 0.
*/


typedef struct Carro{
    char marca[15];
    int ano;
    float preco;
} Carro;

int main(){
    Carro vetor[5];

    for(int i = 0; i< 5; i++){
        printf("Entre com a marca: ");
        scanf("%s", vetor[i].marca);
        printf("Entre com o ano: ");
        scanf(" %d", vetor[i].ano);
        printf("Entre com o preço: ");
        scanf(" %f", vetor[i].preco);
    }

    float preco = 0;
    printf("Entre com o preço a ser pesquisado: ");
    scanf(" %f", preco);

    while(preco != 0){
        sytem("clear");
        for (int i = 0; i < 5; i++){
            if(vetor[i].preco < preco){ 
                printf("Marca %s \t", vetor[i].marca);
                printf("Entre com o ano %d \t", vetor[i].ano);
                printf("Entre com o preço: %f \n", vetor[i].preco);
            }
        }
        printf("Entre com o preço a ser pesquisado: ");
        scanf(" %f", preco);
    }

    return 0;
}