/*O governo acaba de liberar 10.000.000,00 dólares para construção de casas populares, a qual contratou a Construtora Pica Pau S.A. Cada casa custa o equivalente a 150 salários mínimos. Faça um programa que leia o valor do salário mínimo e calcule a quantidade de casas possíveis de se construir*/
//Obs: O dólar se encontra hoje em 5.45, que tristeza, mas como o programa não pediu input, deixei fixo.

#include <stdio.h>

int main(){
    int casas, custo_casa, milhoes = 10000000; //Variáveis
    float dolar = 5.45, salario_minimo;
    printf("Qual o valor do salario minimo?: ");
    scanf("%f", &salario_minimo);   //Entrada salario mínimo
    custo_casa = salario_minimo * 150;  //Cálculo valor por casa em real
    casas = (milhoes * dolar) / custo_casa; //Cálculo do número de casas c/ conversão
    printf("O numero de casas possiveis de serem construidas eh: %d", casas);   //Saída
    return 0;
}