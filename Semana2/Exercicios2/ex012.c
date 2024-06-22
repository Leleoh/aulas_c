/*Escrever um programa para efetuar a leitura de 3 números e apresentar os números que são pares*/

#include <stdio.h>


int main(){
    //Variáveis
    int n1, n2, n3;
    //Entrada
    printf("Insira 3 numeros: ");
    scanf("%d%d%d", &n1,&n2,&n3);
    //Condicionais com verificação de resto de divisão por 2
    if(n1 % 2 == 0){
        printf("%d eh par\n", n1);
    }
    if(n2 % 2 == 0){
        printf("%d eh par\n", n2);
    }
    if(n3 % 2 == 0){
        printf("%d eh par\n", n3);
    }
    return 0;
}