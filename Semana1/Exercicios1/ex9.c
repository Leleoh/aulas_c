/*Esse programa vai ler dos valores, primeiro A e depois B, após isso ele vai trocar os valores dessas variáveis, bizu: variável auxiliar*/

#include <stdio.h>


int main(){
    int A, B, aux;  //Variáveis
    printf("Insira A: ");
    scanf("%d", &A);    //Entrada A
    printf("Insira B: ");
    scanf("%d", &B);    //Entrada B
    printf("Antes da troca: %d %d\n", A, B);    //Saída original
    aux = A;    //Variável auxiliar guardando temporariamente o valor de B
    A = B;
    B = aux;
    printf("Depois da troca: %d %d", A, B); //Saída trocada
    return 0;
}