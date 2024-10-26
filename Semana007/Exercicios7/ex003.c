#include <stdio.h>

int main(){
    int quantidades[4][7];
    float precos[4][7];
    float total[4][7];
    int codigos[4];
    float vendastotal[4] = {0}; // Inicializa o vetor com zeros
    float maiorvenda = 0;       // Inicializa maiorvenda com zero
    int codigomaiorvenda;

    // Lendo os códigos dos produtos
    printf("Digite os códigos dos 4 produtos: \n");
    for(int i = 0; i < 4; i++){
        printf("Código do produto %d: ", i+1);
        scanf("%d", &codigos[i]);
    }

    // Quantidades vendidas
    printf("Insira quantas vezes cada produto foi vendido num dia: \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            printf("Quantidade do produto %d vendida no dia %d: ", codigos[i], j+1);
            scanf("%d", &quantidades[i][j]);
        }
    }

    // Lendo os preços de cada produto
    printf("Insira o preço dos produtos: \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            printf("Preço do produto %d no dia %d: ", codigos[i], j+1);
            scanf("%f", &precos[i][j]);
        }
    }

    // Calculando o valor total de cada produto vendido e o total por produto
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            total[i][j] = quantidades[i][j] * precos[i][j];
            vendastotal[i] += total[i][j];
        }
    }

    // Determinando o produto com o maior número de vendas
    for(int i = 0; i < 4; i++){
        if(vendastotal[i] > maiorvenda){
            maiorvenda = vendastotal[i];
            codigomaiorvenda = codigos[i];
        }
    }

    // Imprimindo o total vendido por produto em cada dia
    printf("Total vendido para cada produto por dia:\n");
    for(int i = 0; i < 4; i++){
        printf("Produto %d:\n", codigos[i]);
        for(int j = 0; j < 7; j++){
            printf(" Dia %d: R$ %.2f\n", j+1, total[i][j]);
        }
    }

    // Código do produto mais vendido
    printf("O produto com o maior número de vendas foi o produto de código %d.\n", codigomaiorvenda);

    return 0;
}
