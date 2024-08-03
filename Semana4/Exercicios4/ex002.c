/*Faça um programa que calcule a soma dos números de 0 até 10, incluindo o 10*/

#include <stdio.h>


int main(){
    int soma;
    //Loop para adicionar o número atual na soma
    for(int i = 0; i <= 10; i++){
        soma += i;
    }
    printf("A soma dos numeros de 0 a 10 eh: %d", soma);    //Saída do valor final
    return 0;
}