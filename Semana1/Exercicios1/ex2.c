/*Faça um programa que irá ler três notas de um aluno e calcular a média final dessas notas, considere que o cálculo envolverá a média ponderada, com os pesos respectivamente de 2,3 e 5*/

#include <stdio.h>


int main(){
    float nota1, nota2, nota3, media;   //Declaração das variáveis
    printf("Insira suas 3 notas: ");    
    scanf("%f%f%f", &nota1, &nota2, &nota3);    //Entrada das notas
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/10;
    printf("A nota final: %.2f", media);    //Saída da média final
    return 0;
}