/*Faça um programa que lê 3 números e que informa quantos desses números são ou pares e positivos ou ímpares e negativos. Por exemplo, entre os números 1, 2, -3, 4, 5, -6, -7, e 8, temos 5 números que satisfazem os critérios.*/

#include <stdio.h>

int main(){
    //Variáveis
    int n1, n2, n3, quantidade = 0;
    //Entrada
    printf("Insira 3 numeros: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    //Condicionais
    if((n1 > 0 && n1 % 2 == 0) || (n1 < 0 && n1 % 2 == -1)){
        quantidade++;
    }
    if((n2 > 0 && n2 % 2 == 0) || (n2 < 0 && n2 % 2 == -1)){
        quantidade++;
    }
    if((n3 > 0 && n3 % 2 == 0) || (n3 < 0 && n3 % 2 == -1)){
        quantidade++;
    }
    printf("A quantidade de numeros que satisfazem os criterios eh %d", quantidade); //Saída
    return 0;
}

