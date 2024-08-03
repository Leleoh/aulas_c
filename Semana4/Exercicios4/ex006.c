/*Faça um programa que lê 10 números positivos e informa se cada número lido é par ou ímpar*/

#include <stdio.h>

int main(){
    int numero, i;
    for(i = 0; i <= 10; i++){
        printf("Insira um numero qualquer: ");
        scanf("%d", &numero);
        if(numero % 2 == 0){
            printf("O numero %d eh par\n", numero);
        }
        else{
            printf("O numero %d eh impar\n", numero);
        }
    }
    return 0;
}