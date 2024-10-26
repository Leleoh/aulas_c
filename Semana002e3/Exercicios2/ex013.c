/*Uma loja fornece 5% de desconto para funcionários e 10% de desconto para
clientes especiais. Faça um programa que calcule o valor total a ser pago por uma
pessoa. O programa deverá ler o valor total da compra efetuada e um código
numérico que identifique se o comprador é um cliente comum (1) ou um
funcionário (código 2) ou cliente especial (código 3).*/

#include <stdio.h>

int main(){
    //Variáveis
    float valor_compra, valor_final;
    int codigo;
    //Entradas
    printf("Insira o valor total das compras: ");
    scanf("%f", &valor_compra);
    printf("Insira o codigo do cliente: ");
    scanf("%d", &codigo);
    //Condicionais
    if(codigo == 1){
        printf("O valor a ser pago eh de %.2f reais", valor_compra);
    }
    if(codigo == 2){
        valor_final = valor_compra * 0.95;
        printf("O valor a ser pago eh de %.2f reais", valor_final);
    }
    if(codigo == 3){
        valor_final = valor_compra * 0.90;
        printf("O valor a ser pago eh de %.2f reais", valor_final);
    }
    return 0;
}