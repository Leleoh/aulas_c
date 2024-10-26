/*Esse programa vai ler o número de horas trabalhadas de um funcionário, o valor que ele recebe por hora, e vai calcular o salário mensal desse funcionário.*/

#include <stdio.h>

int main(){
    float horas, valor_hora, salario; //Declaração variáveis
    printf("Quantas horas trabalhadas por dia: ");
    scanf("%f", &horas); //Entrada horas trabalhadas
    printf("Quanto ganha por hora: ");
    scanf("%f", &valor_hora); //Entrada valor por hora trabalhada
    salario = (valor_hora * horas) * 30;
    printf("O ganho mensal é de %.2f reais", salario); //Saída
    return 0;
}