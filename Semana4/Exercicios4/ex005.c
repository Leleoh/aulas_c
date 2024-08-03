/*Faça um programa que lê um valor inicial Vi e um valor final Vf e calcule a soma de todos os valores entre eles, incluindo vf*/

#include <stdio.h>

int main(){
    int Vi, Vf, soma, i;
    printf("Insira Vi e Vf: ");
    scanf("%d %d", &Vi, &Vf);
    for (i = Vi; i <= Vf; i++){
        soma += i;
    }
    printf("A soma dos numeros correspondidos entre %d e %d eh %d", Vi, Vf, soma);
    return 0;
}