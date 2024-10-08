/*Faça uma função tipada (maior) que recebe dois números inteiros como parâmetros e retorna o maior deles. Caso os dois números sejam iguais, retorne qualquer um deles.*/

#include <stdio.h>

//Declaração da função retornaMaior
int retornaMaior(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

//Função main
int main(){
    //Variáveis
    int num1, num2;
    printf("Insira dois numeros: ");
    scanf("%d %d", &num1, &num2);

    //Guarda o retorno da função na variável resultado
    int resultado = retornaMaior(num1, num2);
    //Saída
    printf("O maior numero informado eh: %d", resultado);

    return 0;
}