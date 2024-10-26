/*Faça um programa em C que lê o código de cliente (um número) e o saldo bancário de 3 clientes de um banco. O programa deve calcular a média do saldo bancário desses clientes, e deve informar o código dos clientes cujo saldo seja superior à média.*/

#include <stdio.h>

int main(){

    //Variáveis
    int c1,c2,c3;
    float saldo1, saldo2, saldo3, media;

    //Entradas
    printf("Codigo do cliente 1: ");
    scanf("%d", &c1);
    printf("Saldo cliente 1: ");
    scanf("%f", &saldo1);
    printf("Codigo do cliente 2: ");
    scanf("%d", &c2);
    printf("Saldo cliente 2: ");
    scanf("%f", &saldo2);
    printf("Codigo do cliente 3: ");
    scanf("%d", &c3);
    printf("Saldo cliente 3: ");
    scanf("%f", &saldo3);
    media = (saldo1 + saldo2 + saldo3) / 3; //Cálculo

    //Condicionais com saída
    if(saldo1 > media){
        printf("A media eh %.2f e o cliente %d possui o saldo maior que a media", media, c1);
    }
    if(saldo2 > media){
        printf("A media eh %.2f e o cliente %d possui o saldo maior que a media", media, c2);
    }
    if(saldo3 > media){
        printf("A media eh %.2f e ocliente %d possui o saldo maior que a media", media, c3);
    }
    
    return 0;
}