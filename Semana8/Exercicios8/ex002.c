/*Faça uma função tipada (menor) que recebe dois números inteiros como parâmetros e retorna o menor deles. Caso os dois números sejam iguais, retorne qualquer um deles.*/

#include <stdio.h>

//Função retorna menor
int retornaMenor(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

//Função main
int main(){
    int num1, num2, resultado;
    printf("Insira dois numeros: ");
    scanf("%d %d", &num1, &num2);
    resultado = retornaMenor(num1, num2);
    printf("O menor numero entre eles eh: %d", resultado);
    return 0;
}