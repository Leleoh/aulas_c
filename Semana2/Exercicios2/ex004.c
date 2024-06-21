/*Faça um programa em C que lê 3 lados de um triângulo e escreve na tela se ele é um triângulo isósceles (2 lados com medidas iguais e 1 diferente), escaleno (3 lados com medidas diferentes) ou equilátero (3 lados com medidas iguais).*/

#include <stdio.h>

int main(){
    float lado1, lado2, lado3; //Variáveis
    //Entradas
    printf("Lado 1: ");
    scanf("%f", &lado1);
    printf("Lado 2: ");
    scanf("%f", &lado2);
    printf("Lado 3: ");
    scanf("%f", &lado3);
    if(lado1 == lado2 && lado2 == lado3){
        printf("O triangulo eh equilatero");    //Saída condicional
    }
    if((lado1 == lado2 && lado2 != lado3) || (lado1 == lado3 && lado1 != lado2) || (lado2 == lado3 && lado2 != lado1)){
        printf("O triangulo eh isosceles"); //Saída condicional
    }
    if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
        printf("O traingulo eh escaleno");  //Saída condicional
    }
    return 0;
}