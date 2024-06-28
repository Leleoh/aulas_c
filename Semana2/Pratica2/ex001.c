/*Escreva um programa que leia do teclado o valor do lado de um cubo, e após calcule os valores (e informe na tela) a área superficial da menor esfera que contenha o cubo inscrito em seu interior e o volume da maior esfera inscrita no cubo. Obs: considere π ≈ 3.1416 nos seus cálculos, e use exatamente quatro casas decimais na impressão dos resultados*/

#include <stdio.h>
#include <math.h>

int main(){
    //Variáveis e entrada do lado
    float lado, area, volume, pi = 3.1416;
    printf("Insira o lado do cubo: ");
    scanf("%f", &lado);

    //Cálculo da área superficial da menor esfera que contém o cubo
    area = 4 * pi * pow(((lado*sqrt(3)) / 2), 2);
    printf("A area eh %.4f", area); //Saída formatada com 4 casas

    //Cálculo do volume da maior esfera inscrita no cubo
    volume = (4.0/3.0) * pi * pow((lado/2), 3);
    printf("\nO volume eh %.4f", volume);   //Saída formatada com 4 casas
    return 0;
}