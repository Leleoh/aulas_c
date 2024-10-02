/*Faça um programa que lê uma série de números, o programa deve parar de ler números quando o usuário informar um número negativo. O programa deve calcular a média dos números pares lidos e a média dos números ímpares lidos*/

#include <stdio.h>


int main(){
    float media_par = 0, media_impar = 0, total_par, total_impar;
    int i = 0, j = 0, numero;

    do{
        printf("Insira num numero: ");
        scanf("%d",&numero);
        if (numero % 2 == 0){
            printf("Eh par\n");
            total_par += numero;
            i++;
        }
        if (numero % 2 != 0){
            printf("Eh impar\n");
            total_impar += numero;
            j++;
        }
    } while(numero > 0);

    media_par = total_par / i;
    media_impar = total_impar / i;

    printf("A media par eh de: %.1f", media_par);
    printf("\nA media impar eh de: %.1f", media_impar);
    return 0;
}