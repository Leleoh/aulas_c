/*Faça um programa em c que lê a idade de uma pessoa em anos, meses e dias e escreva a idade da pessoa em dias (quantos dias a pessoa viveu). Vamos assumir que todo ano tem 365 dias e todo mês tem 30 dias.*/

#include <stdio.h>


int main(){
    int anos, meses, dias, dias_vividos; //Variáveis
    //Entradas
    printf("Quantos anos tu tem?: ");
    scanf("%d", &anos);
    printf("E Quantos meses tu tem?: ");
    scanf("%d", &meses);
    printf("E Quantos dias tu tem?: ");
    scanf("%d", &dias);
    dias_vividos = (anos * 365) + (meses * 30) + dias;  //Cálculo
    printf("Tu vivestes %d dias", dias_vividos);    //Saída
    return 0;
}