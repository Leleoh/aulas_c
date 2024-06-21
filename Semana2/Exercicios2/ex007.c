/*Faça um programa em C que lê a cotação do dólar de 3 dias. Se não houve variação na cotação, o programa deve informar que não houve variação*/


#include <stdio.h>

int main(){
    float d1, d2, d3; //Variáveis
    //Entradas
    printf("Cotacao dia 1: ");
    scanf("%f", &d1);
    printf("Cotacao dia 2: ");
    scanf("%f", &d2);
    printf("Cotacao dia 3: ");
    scanf("%f", &d3);
    if (d1 == d2 && d2 == d3){
        printf("Nao houve variacao"); //Saída
    }
    return 0;
}