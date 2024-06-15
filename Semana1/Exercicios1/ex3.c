/*De forma semelhante ao exercício 2, faça um programa que irá ler as notas de um aluno e calcular a sua média ponderada, com a diferença de que dessa vez o próprio aluno deverá informar os respectivos pesos de cada*/

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media; //Declaração variáveis
    int peso1, peso2, peso3; //Declaração variáveis
    printf("Informe as suas 3 notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);    //Entrada notas
    printf("Informe os respectivos pesos: ");
    scanf("%d%d%d", &peso1, &peso2, &peso3);    //Entrada pesos
    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);    //Cálculo média
    printf("A nota final: %.2f", media);    //Saída
    return 0;
}