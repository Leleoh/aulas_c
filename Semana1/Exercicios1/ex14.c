/*Uma revendedora de carros usados paga a seus funcionários vendedores, um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um programa que lê o número do vendedor, o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que recebe por carro vendido e calcula o salário mensal do vendedor, escrevendo-o juntamente com o seu número de identificação.*/

#include <stdio.h>

int main(){
    //Declaração de variáveis
    float salario_fixo, salario_final, comissao_vendas, comissao_final_vendas, valor_vendido, comissao_fixa;
    int numero_vendedor, carros_vendidos;

    //Começo de entrada das variáveis
    printf("Numero do vendedor: ");
    scanf("%d", &numero_vendedor);
    printf("Seu salario fixo, sem adicionais: ");
    scanf("%f", &salario_fixo);
    printf("Quantos carros o vendedor %d vendeu?: ", numero_vendedor);
    scanf("%d", &carros_vendidos);
    printf("Qual a comissao que ele recebe por carro vendido?: ");
    scanf("%f", &comissao_vendas);
    printf("Qual foi o valor total dos carros vendidos por ele no mes?: ");
    scanf("%f", &valor_vendido);
    comissao_final_vendas = comissao_vendas * carros_vendidos; //Cálculo de comissão variável por carro vendido
    comissao_fixa = valor_vendido * 0.05; //Cálculo de comissão fixa baseada em valor gerado
    salario_final = salario_fixo + comissao_fixa + comissao_final_vendas; //Cálculo salário final
    printf("O salario final do vendedor %d apos as comissoes e adicionais eh de %.2f reais", numero_vendedor, salario_final); //Saída
    return 0;
}