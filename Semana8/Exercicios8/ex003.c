/*Faça uma função tipada que recebe dois números e retorna o resultado do maior deles, menos o menor. Verifique a possibilidade de utilizar as funções “maior” e “menor” desenvolvidas anteriormente.*/
#include <stdio.h>

int retornaMaior(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int retornaMenor(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int num1, num2, r1, r2, resultado;
    printf("Insira dois numeros: ");
    scanf("%d %d", &num1, &num2);
    r1 = retornaMaior(num1, num2);
    r2 = retornaMenor(num1, num2);
    resultado = r1 - r2;
    printf("O resultado eh %d", resultado);

    return 0;
}