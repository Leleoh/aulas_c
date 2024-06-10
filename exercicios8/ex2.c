/*Escreva um programa em C que implemente uma calculadora simples com quatro operações básicas: adição, subtração, multiplicação e divisão. O programa deve ser organizado em funções para cada operação.*/
#include <stdio.h>

float divide(float a, float b){
    float divisao;
    divisao = a/b;
    printf("O resultado eh %.2f", divisao);
};
float multiplica(float a, float b){
    float multiplicacao;
    multiplicacao = a * b;
    printf("O resultado eh %.2f", multiplicacao);
};
float soma(float a, float b){
    float adição;
    adição = a + b;
    printf("O resultado eh %.2f", adição);
};
float diminui(float a, float b){
    float subtração;
    subtração = a - b;
    printf("O resultado eh %.2f", subtração);
};

int main(){
    float a,b;
    int escolha;
    printf("[1]Dividir\n[2]Multiplicar\n[3]Somar\n[4]Diminuir\nDigite a operacao que voce quer realizar: ");
    scanf("%d", &escolha);
    if (escolha == 1){
        printf("Voce escolheu dividir\n");
        printf("Insira o primeiro numero: ");
        scanf("%f", &a);
        printf("Insira o segundo numero: ");
        scanf("%f", &b);
        divide(a,b);
    }
    if (escolha == 2){
        printf("Voce escolheu multiplicar\n");
        printf("Insira o primeiro numero: ");
        scanf("%f", &a);
        printf("Insira o segundo numero: ");
        scanf("%f", &b);
        multiplica(a,b);
    }
    if (escolha == 3){
        printf("Voce escolheu somar\n");
        printf("Insira o primeiro numero: ");
        scanf("%f", &a);
        printf("Insira o segundo numero: ");
        scanf("%f", &b);
        soma(a,b);
    }
    if (escolha == 4){
        printf("Voce escolheu diminuir\n");
        printf("Insira o primeiro numero: ");
        scanf("%f", &a);
        printf("Insira o segundo numero: ");
        scanf("%f", &b);
        diminui(a,b);
    }
    return 0;
}