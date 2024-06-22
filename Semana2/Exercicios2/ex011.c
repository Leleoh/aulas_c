/*. Escrever um programa para efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o número lido como sendo um valor positivo, ou seja, o programa deverá apresentar o módulo de um número fornecido. Não utilize funções da biblioteca math.h*/

#include <stdio.h>

int main(){
    //Variáveis
    int numero, modulo;
    //Entrada
    printf("Insira um numero inteiro positivo ou negativo: ");
    scanf("%d", &numero);
    //Condicionais
    if(numero > 0){
        modulo = numero;
        printf("O modulo desse valor eh %d", modulo);
    }
    if(numero < 0){
        modulo = numero + (-numero * 2);    //Cálculo para tornar em módulo (-) * (-) = +
        printf("O modulo desse valor eh %d", modulo);
    }
    return 0;
}