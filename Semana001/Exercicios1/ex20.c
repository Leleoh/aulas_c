/*Escreva um programa para ler dois inteiros (variáveis A e B) e efetuar as operações de adição, subtração, multiplicação e divisão de A por B apresentando ao final os quatro resultados obtidos.*/

#include <stdio.h>

int main(){
    int A,B, soma, subtracao, divisao, multiplicacao; //Variáveis
    printf("Insira A e B: ");
    scanf("%d%d", &A, &B); //Entrada A e B
    //Operações
    soma = A + B;
    subtracao = A - B;
    divisao = A / B;
    multiplicacao = A * B;
    //Saídas
    printf("A soma de A e B eh: %d\n", soma);
    printf("A subtracao de A e B eh: %d\n", subtracao);
    printf("A multiplicacao de A e B eh: %d\n", multiplicacao);
    printf("A divisao de A e B eh: %d", divisao);
    return 0;
}