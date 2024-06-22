/*Escrever um programa que lê 3 valores a, b, c e verifica se eles formam ou não um
triângulo. Caso os valores formem um triângulo, calcular e escrever a área deste
triângulo. Para que 3 lados formem um triângulo, eles devem satisfazer às seguintes
condições: a soma de dois lados é sempre maior que o terceiro lado e o terceiro lado deve ser sempre maior do que a subtração dos outros dois*/
//Obs: Teremos que usar a fórmula de Heron

#include <stdio.h>
#include <math.h>

int main(){
    //Variáveis
    float a,b,c,area, p;

    //Entradas
    printf("Insira o valor do lado a: ");
    scanf("%f", &a);
    printf("Insira o valor do lado b: ");
    scanf("%f", &b);
    printf("Insira o valor do lado c: ");
    scanf("%f", &c);

    //Condicional de existência
    if(a < b + c && b < a + c && c < a + b){
        p = (a + b + c) / 2;
        area = sqrt(p * (p-a) * (p-b) * (p-c)); //Fórmula de Heron para achar a área
        printf("A area do triangulo eh %.2f", area);
    }
    return 0;
}