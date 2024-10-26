/*Esse programa calcula o consumo médio de combustível que um carro teve durante uma viagem recebendo como entrada a distância percorrida e o volume de combustível gasto ao todo*/

#include <stdio.h>

int main(){
    float distancia, volume, consumo;
    printf("Insira a distancia percorrida: ");
    scanf("%f", &distancia);
    printf("Insira o volume de combustivel consumido: ");
    scanf("%f", &volume);
    consumo = distancia / volume;
    printf("O gasto medio de combustivel por KM rodado foi de %.1f litros", consumo);
    return 0;
}