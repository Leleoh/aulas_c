/*Faça um programa em C que lê a altura de 3 pessoas, calcula a média da altura dessas 3 pessoas e escreva quantas pessoas tem estatura abaixo da média*/

#include <stdio.h>

int main(){

    //Variáveis
    float p1, p2, p3, media;
    int abaixo_media = 0;

    //Entradas
    printf("Altura da pessoa 1: ");
    scanf("%f", &p1);
    printf("Altura da pessoa 2: ");
    scanf("%f", &p2);
    printf("Altura da pessoa 3: ");
    scanf("%f", &p3);
    media = (p1 + p2 + p3) / 3; //Cálculo média

    //Condicionais
    if (p1 < media){
        abaixo_media++;
    }
    if (p2 < media){
        abaixo_media++;
    }
    if (p3 < media){
        abaixo_media++;
    }

    //Saídas
    printf("A media de altura eh %.2f", media);
    printf("\nExistem %d pessoa(s) abaixo da media", abaixo_media);
    return 0;
}