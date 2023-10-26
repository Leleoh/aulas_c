/*Esse programa é capaz de ler o número de horas que um funcionário trabalha e, baseado no salário mínimo vigente, calcular o quanto ele deve ganhar no fim do mês.*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int hora,totalmes;
    float totaldia;
    printf("Por favor, informe quantas horas você trabalha por dia:");
    scanf("%d", &hora);
    totaldia = hora*5.5;
    totalmes = totaldia*30;
    printf("Baseado no salário mínimo atual, você recebe: %.2f reais por dia \n", totaldia);
    printf("O que num mês de trabalho resulta em %d reais por mês", totalmes);
}