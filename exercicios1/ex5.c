/*Esse código lê uma temperatura em graus Celcius e a converte para Graus Fahrenheit*/
#include <stdio.h>

int main(){
    float c, f;
    printf("Digite a sua temperatura em Celsius: ");
    scanf(" %f", &c);
    f = (c * 9/5) + 32;
    printf("A sua temperatura convertida para Fahrenheit é %.1f", f);
    return 0;
}