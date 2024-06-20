/*Faça um algoritmo que leia um valor inteiro positivo de 3 dígitos, armazene-o em uma variável inteira e determine a soma dos dígitos que formam o valor. Exemplo: o valor 453 tem soma dos dígitos igual a 12 (4 + 5 + 3).*/

#include <stdio.h>

int main(){
    int valor, centena, dezena, unidade, soma;
    //Lendo o valor
    printf("Insira o valor de 3 digitos: ");
    scanf("%d", &valor);

    //Separando os dígitos
    centena = valor / 100;
    dezena = (valor / 10) % 10;
    unidade = valor % 10;
    
    soma = centena + dezena + unidade; //Soma total
    printf("Centena: %d, Dezena: %d, Unidade: %d\n", centena, dezena, unidade);
    printf("A soma dos digitos eh %d", soma);
    return 0;
}

//Os cálculos realizados aqui foram feitos em papel e caneta, em algumas operações buscamos apenas a divisão e em outras o resto de divisão