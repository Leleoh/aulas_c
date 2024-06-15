/*Esse programa recebe o raio de um círculo e calcula a sua área*/

#include <stdio.h>

int main(){
    float raio, area, pi = 3.14; //Declaração variáveis
    printf("Insira o raio: ");
    scanf("%f", &raio); //Entrada raio
    area = pi * (raio * raio);
    printf("A area do circulo eh %.2f", area);  //Saída área
    return 0;
}