/*Esse programa lê uma série de números digitados pelo usuário até o momento no qual será informado um número negativo. Nesse momento, ele calculará e exibirá a média dos números pares e dos números ímpares obtidos*/
#include <stdio.h>

int main(){
    int numero, par, impar, somapar, somaimpar; //Declaração variáveis
    float mediapar, mediaimpar; //Declaração variáveis
    somapar = somaimpar = par = impar = 0; //Setando os valores para 0
    while(numero >= 0){
        printf("Digite um numero: ");
        scanf("%d", &numero); //Entrada do número a ser escolhido
        if (numero % 2 == 0){ //Verificação de caráter par
            somapar += numero;
            par += 1; //Contador do número de pares encontrados
        }
        else{   //Condição contrária para caso ímpar
            somaimpar += numero;
            impar += 1; //Contador do número de ímpares encontrados
        }    
    }
    mediapar = somapar / par;
    mediaimpar = somaimpar / impar;
    printf("A media dos numeros pares lidos foi de %.2f", mediapar);
    printf("\nA media dos numeros impares lidos foi de %.2f", mediaimpar);
    return 0;
}