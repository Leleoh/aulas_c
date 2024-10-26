/*Esse programa deve ler o número de prestações de um consórcio que deverão ser pagas,a quantidade de que já foram pagas, e o valor das prestações, após isso deverá ser calculado o quanto ainda falta pagar (saldo devedor)*/

#include <stdio.h>

int main(){
    int prestacoes, prestacoes_pagas; //Variáveis
    float valor_prestacoes, saldo_devedor;
    printf("Insira a quantidade de prestacoes a serem pagas, quantas foram pagas e o valor de cada uma: ");
    scanf("%d%d%f", &prestacoes, &prestacoes_pagas, &valor_prestacoes); //3 das entradas pedidas
    saldo_devedor = (valor_prestacoes * prestacoes) - (prestacoes_pagas * valor_prestacoes); //Cálculo para descobrir o saldo devedor
    printf("O saldo devedor eh de: %.2f reais", saldo_devedor); //Saída
    return 0;
}