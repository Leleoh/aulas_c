/*Esse programa lê as informações de uma pessoa como peso e altura e exibe na tela para o usuário ver*/
#include <stdio.h>

int main(){
    float altura, peso, imc;
    printf("Vamos calcular seu IMC!\n");
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite o seu peso em KG: ");
    scanf("%f", &peso);
    imc = peso / (altura * altura);
    printf("O seu IMC é de %.1f KG/m²", imc);
    return 0;
}