/*Faça um programa que auxilie no cálculo da resistência (em ohm), diferença de potencial (em volt) e corrente elétrica (em ampère). O programa deve exibir uma mensagem perguntando ao usuário qual das grandezas ele quer calcular, relacionando a cada opção um valor numérico: 1-Resistência, 2-Diferença de potencial e 3-Corrente elétrica. Dependendo da opção, o programa deve ler o valor das duas grandezas necessárias para calcular o que se deseja e deve exibir o resultado. Por exemplo, se a opção for 1, indicando que o programa deve calcular a resistência, o programa deve ler a diferença de potencial e a corrente elétrica e exibir o resultado*/

#include <stdio.h>

int main(){
    //Variáveis
    int opcao;
    float r, ddp, i;

    //Entrada
    printf("[1] = Resistencia, [2] = Voltagem, [3] = Corrente.\n");
    printf("Insira a opcao desejada: ");
    scanf("%d", &opcao);

    //Condicional res
    if(opcao == 1){
        printf("Calculo de resistencia escolhido!\n");
        printf("Insira a voltagem: ");
        scanf("%f", &ddp);
        printf("Insira a corrente: ");
        scanf("%f", &i);
        r = ddp/i;
        printf("A resistencia eh de %.2f ohms", r);
    }
    
    //Condicional volt
    if(opcao == 2){
        printf("Calculo de voltagem escolhido!\n");
        printf("Insira a resistencia: ");
        scanf("%f", &r);
        printf("Insira a corrente: ");
        scanf("%f", &i);
        ddp = r*i;
        printf("A voltagem eh de %.2f volts", ddp);
    }

    //Condicional corr
    if(opcao == 3){
        printf("Calculo de corrente escolhido!\n");
        printf("Insira a voltagem: ");
        scanf("%f", &ddp);
        printf("Insira a resistencia: ");
        scanf("%f", &r);
        i = ddp/r;
        printf("A corrente eh de %.2f amperes", i);
    }
    return 0;
}