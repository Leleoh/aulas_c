//Esse programa irá receber uma temperatura em graus Celcius e irá converter para Fahrenheit

#include <stdio.h>

int main(){
    float celcius, fahrenheit; //Declaração de variáveis
    printf("Insira a temperatura em Celcius: ");
    scanf("%f", &celcius);  //Entrada celcius
    fahrenheit = (celcius * 9/5) + 32;
    printf("%.1f graus Celsius em Fahrenheit equivale a %.1f graus", celcius, fahrenheit); //Saída
    return 0;
}