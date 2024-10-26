/*Faça um programa que lê e armazena 5 valores em um arranjo. Depois o programa deve ler um valor n. A seguir, o programa deve verificar se este valor está no arranjo. Quando o valor é encontrado, deve-se exibir uma mensagem na tela.*/

#include <stdio.h>


int main(){
    int array[5], i, n;
    for(i = 1; i <= 5; i++){
        printf("Insira o valor %d:", i);
        scanf("%d", &array[i]);
    }
    printf("Insira um valor 'n': ");
    scanf("%d", &n);
    for(i = 1; i <= 5; i++){
        if(array[i] == n){
            printf("Valor %d encontrado", n);
        }
    }
    return 0;
}