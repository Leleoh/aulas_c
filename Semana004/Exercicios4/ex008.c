/*Faça um programa que exiba todos os números ímpares de 0 a 1000*/

#include <stdio.h>

int main(){
    int i;
    for(i = 0; i <= 1000; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}