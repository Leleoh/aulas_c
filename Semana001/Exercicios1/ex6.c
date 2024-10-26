/*Esse programa calcula a área de um triângulo a partir da sua base e da sua altura*/

#include <stdio.h>

int main(){
    float base, altura, area;   //Declaração de variáveis
    printf("Tamanho da base: ");
    scanf("%f", &base); //Entrada base
    printf("Altura: ");
    scanf("%f", &altura);   //Entrada altura
    area = (base * altura) / 2;
    printf("A area corresponde a %.2f", area);  //Saída com área do triângulo
    return 0;
}

