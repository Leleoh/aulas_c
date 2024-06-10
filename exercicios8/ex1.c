/*Faça uma função tipada (maior) que recebe dois números inteiros como parâmetros e retorna o maior deles. Caso os dois números sejam iguais, retorne qualquer um deles.*/

#include <stdio.h>

int maior_numero(int a, int b){
    if (a > b){
        printf("O %d eh maior", a);
        return a;
    };
    if (b > a){
        printf("O %d eh maior", b);
        return b;
    };
    if (b == a){
        return a;
    }
};


int main(){
    int a, b;
    printf("Insira dois numeros: ");
    scanf("%d %d", &a, &b);
    maior_numero(a,b);

}