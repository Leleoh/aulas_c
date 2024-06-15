/*Faça um algoritmo que lê o peso e a altura de uma pessoa para calcular o IMC dela*/

#include <stdio.h>

int main(){
    float peso, altura, imc;    //Declaração variáveis
    printf("Insira seu peso em KG: ");
    scanf("%f", &peso); //Entrada peso
    printf("Insira sua altura em M: ");
    scanf("%f", &altura);   //Entrada altura
    imc = peso/(altura*altura);
    printf("O IMC corresponde a: %.1f", imc);   //Saída
    return 0;
}