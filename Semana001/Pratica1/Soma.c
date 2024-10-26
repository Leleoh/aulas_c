//Esse programa recebe duas variáveis, soma elas e imprime o resultado

#include <stdio.h>

int main(){
    int val1, val2, soma;
    printf("Insira dois valores: ");
    scanf("%d%d", &val1, &val2);
    soma = val1 + val2;
    printf("A soma entre %d e %d eh %d", val1, val2, soma);
    return 0;
}