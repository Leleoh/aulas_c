/*Escrever um programa para ler dois valores numéricos e apresentar a diferença do maior pelo menor*/

#include <stdio.h>

int main(){
    float n1, n2, diferenca; //Variáveis
    printf("Insira n1 e n2: ");
    scanf("%f%f", &n1, &n2); //Entradas
    if(n1 > n2){
        diferenca = n1 - n2;
        printf("A diferenca do maior para o menor eh %.1f", diferenca); //Saída condicional 
    }
    if (n2 > n1){
        diferenca = n2 - n1;
        printf("A diferenca do maior para o menor eh %.1f", diferenca); //Saída condicional 
    }
    return 0;
}