/*Faça um programa que preenche uma matriz 4X4 com valores informados pelo usuário. Depois, o programa deve informar o maior elemento da matriz*/
#include <stdio.h>

int main(){
    int matriz[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Insira um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    int maior_elemento = matriz[0][0];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] > maior_elemento){
                maior_elemento = matriz[i][j];
            }
        }
    }
    printf("O maior elemento inserido na matriz eh: %d\n", maior_elemento);
    return 0;
}