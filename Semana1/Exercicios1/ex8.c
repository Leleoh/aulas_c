/*Esse programa recebe as dimensões de um terreno baldio, e em seguida as dimensões de uma casa, após isso, ele calcula a porcentagem do terreno que está livre, ou seja, que a casa não ocupa*/

#include <stdio.h>

int main(){
    float t1, t2, c1, c2, tamanho_casa, tamanho_terreno, porcentagem;
    printf("Insira o comprimento e a largura do terreno: ");
    scanf("%f%f", &t1, &t2);
    printf("Insira o comprimento e a largura da casa: ");
    scanf("%f%f", &c1, &c2);
    tamanho_terreno = t1 * t2;
    tamanho_casa = c1 * c2;
    porcentagem = (tamanho_casa / tamanho_terreno) * 100;
    printf("A area ocupada pela casa equivale a %.0f%% do terreno", porcentagem);
    return 0;
}