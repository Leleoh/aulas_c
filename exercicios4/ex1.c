/*Esse programa lê uma série de números informados pelo usuário, no momento em que é informado um número negativo, ele para a leitura e calcula a média dos números pares e ímpares lidos até esse momento*/
#include <stdio.h>
int main(){
    int somapar, somaimpar, negativo, numero, npar, nimpar;
    float mediapar, mediaimpar;
    somapar = somaimpar = mediapar = mediaimpar = negativo = npar = nimpar = 0;
    printf("Informe uma sequencia de numeros, quando um for negativo, o programa ira parar quando um dos numeros informados for negativo. \n");
    while (negativo == 0){
        printf("Informe um numero: ");
        scanf("%d", &numero);
        if (numero < 0){
            printf("O programa chegou ao fim, voce informou um numero negativo");
            break;
        }
        if (numero % 2 == 0){
            npar++;
            somapar += numero;
        }
        if (numero % 2 == 1){
            nimpar++;
            somaimpar += numero;
        }
    }
    if (npar > 0){
        mediapar = (float)somapar/npar;
        printf("\nA media total dos numeros pares lidos foi: %.2f\n", mediapar);
    }
    else{
        printf("Nenhum número par foi informado");
    }
    if (nimpar > 0){
        mediaimpar = (float)somaimpar/nimpar;
        printf("A media total dos numeros impares lidos foi: %.2f", mediaimpar);
    }
    else{
        printf("Nenhum numero impar foi informado");
    }
    return 0;
}