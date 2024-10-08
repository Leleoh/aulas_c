/*Faça um programa que lê e armazena 5 valores em um arranjo. Depois o programa deve ler um valor n. A seguir, o programa deve verificar se este valor está no arranjo. Se ele estiver, o programa deve informar a posição do vetor em que este valor se encontra. Se não estiver, o programa deve informar que o valor não se encontra no vetor.*/

#include <stdio.h>

int main(){
    int array[5], i, n, presente, posicao = 0;
    for(i = 1; i <= 5; i++){
        printf("Insira o valor %d:", i);
        scanf("%d", &array[i]);
    }
    printf("Insira um valor 'n': ");
    scanf("%d", &n);
    for(i = 1; i <= 5; i++){
        posicao = i;
        if(array[i] == n){
            printf("O valor %d esta presente na posicao %d", n, posicao);
            presente = 1;
        }
    }
    if(presente != 1){
        printf("O valor %d nao foi encontrado no vetor", n);
    }



    return 0;
}