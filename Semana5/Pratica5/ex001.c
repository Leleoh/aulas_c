/*Escreva um programa que leia um valor inteiro positivo e calcule a seguinte seqüência de valores: se o número for par, calcule sua metade; se for ímpar, multiplique por 3 e adicione 1. Repita este processo até o valor 1 ser encontrado, imprimindo o valor resultante de cada iteração. Por fim, imprima quantas dessas operações você realizou.*/

#include <stdio.h>

int main(){
    int operacoes = 0, n;
    printf("Insira um valor inteiro: ");
    scanf("%d", &n);
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = (n * 3) + 1;
        }
        printf("Valor atual de n: %d\n", n);
        operacoes++;
    }
    printf("O total de operacoes realizadas foi de %d", operacoes);
    return 0;
}