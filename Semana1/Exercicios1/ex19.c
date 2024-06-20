/*. Escreva um programa para dar o total, em reais, de um cofrinho que contenha: n1 moedas de 1 real; n2 moedas de 50 centavos; n3 moedas de 25 centavos; n4 moedas de 10 centavos; e n5 moedas de 5 centavos.*/

#include <stdio.h>

int main(){
    int n1, n2, n3, n4, n5; //Variáveis
    float total;
    //Entradas
    printf("Moedas de 1 real: ");
    scanf("%d", &n1);
    printf("Moedas de 50 centavos: ");
    scanf("%d", &n2);
    printf("Moedas de 25 centavos: ");
    scanf("%d", &n3);
    printf("Moedas de 10 centavos: ");
    scanf("%d", &n4);
    printf("Moedas de 5 centavos: ");
    scanf("%d", &n5);
    total = n1 + (n2 * 0.5) + (n3 * 0.25) + (n4 * 0.1) + (n5 * 0.05); //Cálculo transformando para real em proporção
    printf("O valor final fica em %.2f reais", total); //Saída
    return 0;
}