/*Esse programa exibe os números entre um intervalo escolhido pelo usuário*/
#include <stdio.h>

int main(){
    int inicio, fim, cont, temp;
    printf("Escolha o numero pelo qual voce quer iniciar a contar: ");
    scanf("%d", &inicio);
    printf("Escolha o numero que voce quer terminar de contar: ");
    scanf("%d", &fim);
    if (inicio > fim){
        temp = inicio;
        inicio = fim;  /*Troca de valores, armazenamos o valor do inicio numa variável temp para depois transferir esse valor na variável final. */
        fim = temp;
    }
    for (cont = inicio; cont <= fim; cont ++){  /*Contador para a soma*/
        printf("\n %d", cont);    
    }
    return 0;
}