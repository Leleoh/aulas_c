/*Esse programa � capaz de ler o n�mero de horas que um funcion�rio trabalha e, baseado no sal�rio m�nimo vigente, calcular o quanto ele deve ganhar no fim do m�s.*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int hora,totalmes;
    float totaldia;
    printf("Por favor, informe quantas horas voc� trabalha por dia:");
    scanf("%d", &hora);
    totaldia = hora*5.5;
    totalmes = totaldia*30;
    printf("Baseado no sal�rio m�nimo atual, voc� recebe: %.2f reais por dia \n", totaldia);
    printf("O que num m�s de trabalho resulta em %d reais por m�s", totalmes);
}