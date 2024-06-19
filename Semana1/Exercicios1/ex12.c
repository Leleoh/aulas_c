/*Esse programa irá calcular a média de dinheiro gasta por KM em função de quantos litros foram gastos, para que o programa funcione adequadamente deve ser informado o preço da gasolina*/

#include <stdio.h>

int main(){
    float distancia_percorrida, combustivel_gasto, valor_combustivel, preco_medio; //Variáveis
    printf("Insira o valor do litro da gasolina: ");
    scanf("%f", &valor_combustivel); //Entrada valor da gasolina por litro
    printf("Insira a distancia percorrida no trajeto: ");
    scanf("%f", &distancia_percorrida); //Entrada de KM percorridos
    printf("Insira quantos litros foram usados: ");
    scanf("%f",&combustivel_gasto); //Entrada de litros utilizados
    preco_medio = (valor_combustivel * combustivel_gasto) / distancia_percorrida; //Cálculo de R$/L
    printf("O preço médio por KM rodado foi de %.2f reais", preco_medio); //Saíde final
    return 0;
}