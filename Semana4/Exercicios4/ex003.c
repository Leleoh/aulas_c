/*Faça um programa que verifica todos os números entre 0 e 10 incluindo o 10, e que informe se o número é par ou impar*/

#include <stdio.h>

int main(){
    for(int i = 0; i <= 10; i++){
        
        //Condição que faz o resto de divisão para verificar a paridade
        if(i % 2 == 0){
            printf("O numero %d eh par\n", i);
        }
        else{
            printf("O numero %d eh impar\n", i);
        }
    }
    return 0;
}