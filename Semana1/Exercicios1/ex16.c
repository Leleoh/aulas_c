/*Faça um programa que calcula a quantidade de latas de tinta necessária e o custo para pintar uma quantidade de chapas de madeira retangulares. O algoritmo deve ler a quantidade de chapas que devem ser pintadas, as dimensões de cada chapa (largura e comprimento), o custo da lata de tinta, e a quantidade de metros quadrados que podem ser pintados com cada lata de tinta.*/

#include <stdio.h>


int main(){
    //Variáveis
    int quantidade_chapas, quantidade_latas;
    float largura_chapa, comprimento_chapa, custo_lata, metros_pintados, area, valor;
    //Entradas para as variáveis
    printf("Quantidade de chapas que serao pintadas?: ");
    scanf("%d", &quantidade_chapas);
    printf("Respectivamente, largura e comprimento das chapas: ");
    scanf("%f%f", &largura_chapa, &comprimento_chapa);
    printf("Custo da lata de tinta: ");
    scanf("%f", &custo_lata);
    printf("Quantos metros quadrados cada lata pinta?: ");
    scanf("%f", &metros_pintados);
    //Cálculos
    area = comprimento_chapa * largura_chapa * quantidade_chapas;
    quantidade_latas = area / metros_pintados;
    valor = quantidade_latas * custo_lata;
    //Saída
    printf("Sao precisas %d latas para pintar essas chapas, e o valor disso fica em %.2f reais", quantidade_latas, valor);
    return 0;
}