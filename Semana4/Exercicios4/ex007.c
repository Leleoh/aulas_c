/*Faça um programa que lê 10 números positivos e informe ao final quantos eram pares e quantos eram ímpares*/

#include <stdio.h>

int main(){
    int i, numero, qtdpares, qtdimpares;
    for(i = 0; i <= 10; i++){
        printf("Insira um numero: ");
        scanf("%d", &numero);
        if(numero % 2 == 0){
            qtdpares++;
        }
        if(numero % 2 != 0){
            qtdimpares++;
        }
    }
    printf("A quantidade de numeros pares eh %d\n", qtdpares);
    printf("A quantidade de numeros impares eh %d", qtdimpares);
    return 0;
}