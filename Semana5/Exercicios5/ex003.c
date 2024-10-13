/*Faça um programa que leia uma série de números positivos e determine qual é o maior e qual é o menor deles. O programa deve parar de ler números quando for informado um número negativo.*/
#include <stdio.h>

int main(){
    int n1, n2, maior;
    do{
        printf("Insira um numero: ");
        scanf("%d", &n1);
        printf("Insira outro numero: ");
        scanf("%d", &n2);
        if(n1 > n2){
            maior = n1;
            printf("O maior numero eh %d\n", maior);
        }
        if(n2 > n1){
            maior = n2;
            printf("O maior numero eh %d\n", maior);
        }
    }while(n1 >= 0 || n2 >= 0);
    
    return 0;
}