/*Faça um programa que lê uma série de números inteiros. Caso o número seja par e negativo, o programa o exibe na tela. O programa deve parar de ler números quando for informado um valor que não é simultaneamente par e positivo.*/
#include <stdio.h>

int main() {
    int n1;

    // Inicialização da variável fora do loop
    do {
        // Entrada do número
        printf("Insira um numero: ");
        scanf("%d", &n1);

        // Verificação e exibição de números que são pares e negativos
        if (n1 < 0 && n1 % 2 == 0) {
            printf("%d\n", n1);
        }

    // Laço continua enquanto o número for par e positivo
    } while (n1 > 0 && n1 % 2 == 0);

    return 0;
}
