/*Esse programa é capaz de receber as entradas sobre os acertos de questões dos estudantes, calcular a pontuação baseada nesses acertos e devolver no fim a nota final dos alunos*/

#include <stdio.h>
int main(){
    int problema1, problema2, problema3, problema4, problema5, acertos;
    float pontos, pontuacaofinal;
    char r1,r2,r3,r4,r5;
    pontos = 0;
    acertos =0;
    printf("Vamos calcular a nota final da equipe de estudantes!\n");
    printf("O problema 1 foi resolvido? (N/R): ");
    scanf(" %c", &r1);
    printf("O problema 2 foi resolvido? (N/R): ");
    scanf(" %c", &r2);
    printf("O problema 3 foi resolvido? (N/R): ");
    scanf(" %c", &r3);
    printf("O problema 4 foi resolvido? (N/R): ");
    scanf(" %c", &r4);
    printf("O problema 5 foi resolvido? (N/R): ");
    scanf(" %c", &r5);
    if (r1 == 'R' || r1 == 'r'){
        pontos += 12.5;                 /*Contador*/
        acertos += 1;
    }
    if (r2 == 'R'|| r2 == 'r'){
        pontos += 7.25;                 /*Contador*/
        acertos += 1;
    }
    if (r3 == 'R'|| r3 == 'r'){
        pontos += 10.0;                 /*Contador*/
        acertos += 1;
    }
    if (r4 == 'R'|| r4 == 'r'){
        pontos += 16.2;
        acertos += 1;                   /*Contador*/
    }
    if (r5 == 'R'|| r5 == 'r'){
        pontos += 9.0;
        acertos += 1;                   /*Contador*/
    }
    if (r1 == 'N' || r1 == 'n'){
        pontos += 0;
    }
    if (r2 == 'N'|| r2 == 'n'){
        pontos += 0;
    }
    if (r3 == 'N'|| r3 == 'n'){
        pontos += 0;
    }
    if (r4 == 'N'|| r4 == 'n'){
        pontos += 0;
    }
    if (r5 == 'N'|| r5 == 'n'){
        pontos += 0;
    }
    if (acertos >=3){
        pontuacaofinal = 1.25 * pontos;
        printf("Sua equipe recebeu o bônus por quantidade\n");
        printf("A pontuação final é: %.2f", pontuacaofinal);  /*Pontuação final com bônus*/
    }
    else{
        printf("Não ganhou bônus de quantidade\n");
        printf("A pontuação final é: %.2f", pontos);            /*Pontuação final sem bônus*/
    }
}