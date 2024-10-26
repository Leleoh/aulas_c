/*Um modelo para descrever o tamanho população de bactérias presente em um ambiente em função do tempo t é N(t) = N0e rt . Nessa formulação N0 é a quantidade inicial de bactérias e r é uma constante dependente de espécie. Escreva um programa que leia do teclado os valores de N0, r e t, e após calcule (e imprima na tela) o valor de N(t). Mostre o valor de N(t) arredondando para o valor inteiro mais próximo.*/

#include <stdio.h>
#include <math.h>

int main(){
    float N0, r, t, Nt; //Variáveis
    printf("Insira N0, r e t: ");
    scanf("%f%f%f", &N0, &r, &t);
    Nt = N0 * exp(r * t); //A função exp() da math.h, calcula o log neperiano
    Nt = round(Nt); //Arredondando para cima
    printf("O numero de bacterias final eh de %.0f", Nt); //Saída
    return 0;
}