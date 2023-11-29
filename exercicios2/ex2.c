//Esse programa recebe dois números como entrada e devolve a subtração do maior pelo menor//
#include <stdio.h>

int main(){
    int valor1, valor2, temp, sub;
    printf("Digite seu primeiro numero: "); //Entrada 1
    scanf("%d", &valor1);
    printf("Digite seu segundo numero: ");  //Entrada 2
    scanf("%d", &valor2);
    if (valor1 > valor2){
        temp = valor2;      //Caso para a variável temporária
        valor2 = valor1;
        valor1 = temp;
    }
    sub = valor2 - valor1;  //Cálculo do maior pelo menor
    printf("O valor da subtração do maior numero indicado pelo menor e: %d", sub);
    return 0;
}