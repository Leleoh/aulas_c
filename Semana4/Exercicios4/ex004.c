/*Faça um programa que lê um valor n e calcula a soma de todos os valores de 0 até n, incluindo n*/

#include <stdio.h>

int main(){
    int n, soma, i;
    printf("Insira o numero n: ");
    scanf("%d", &n);
    for(i = 0; i <= n; i++){
        soma += i;
    }
    printf("A soma dos numeros do 0 ate o %d eh %d", n, soma);
    return 0;
}