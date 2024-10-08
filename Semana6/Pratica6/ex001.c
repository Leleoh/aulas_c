/*Escreva um programa em C que leia uma quantidade indefinida de valores reais estritamente positivos (um valor negativo é usado para indicar o fim da entrada de dados), e armazene-os em um arranjo. Após, o programa deve calcular e imprimir na tela: a) O média dos valores informados (com duas casas decimais) b) A quantidade de valores maiores do que a média c) A quantidade de valores cujo quadrado eh menor do que a média Assuma que a quantidade máxima de valores lidos é dada por MAXLIDOS, dado através de um #define.*/

#include <stdio.h>
#define MAXLIDOS 30

int main(){
    float vetor[MAXLIDOS], media, n, soma, valor;
    int maiorquemedia, quadradomaior, i = 0, j = 0;

    while(1){
        printf("Insira um valor inteiro: ");
        scanf("%f", &n);
        
        if(n < 0){
            break;
        }
        if(i >= MAXLIDOS){
            break;
        }

        vetor[i] = valor;
        soma += valor;
        i++;
    }

    media = soma / i;

     for (j = 0; j < i; j++) {
        if (vetor[j] > media) {
            maiorquemedia++;
        }
        if ((vetor[j] * vetor[j]) < media) {
            quadradomaior++;
        }
    }
    
    printf("\nMédia dos valores: %.2f\n", media);
    printf("Quantidade de valores maiores do que a média: %d\n", maiorquemedia);
    printf("Quantidade de valores cujo quadrado é menor do que a média: %d\n", quadradomaior);


    return 0;
}