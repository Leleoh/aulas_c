/*Considere dois valores x e y que correspondem as coordenadas de um ponto ⃗p = (x, y) no plano cartesiano. Escreva um programa que leia x e y, e depois solicite a leitura de um caractere c. Se c for igual a q, mostre na tela o quadrante em que ⃗p se encontra (1,2,3 ou 4). Se c for igual a d, retorne a distância deste ponto para a origem (0, 0), usando duas casas após o ponto decimal.*/

#include <stdio.h>
#include <math.h>

int main(){
    //Variáveis
    float x, y, distancia;
    char c;

    //Entradas
    printf("Insira x e y: ");
    scanf("%f%f", &x, &y);
    printf("Insira o caractere [Q]Quadrante ou [D] distancia: ");
    scanf(" %c", &c);

    //Condicionais para caso a opção escolhida seja o quadrante
    if(c == 'Q' || c == 'q'){
        if(x > 0 && y > 0){
            printf("O ponto se encontra no quadrante 1");
            return 0;
        }
        if(x > 0 && y < 0){
            printf("O ponto se encontra no quadrante 2");
            return 0;
        }
        if(x < 0 && y > 0){
            printf("O ponto se encontra no quadrante 4");
            return 0;
        }
        if(x < 0 && y < 0){
            printf("O ponto se encontra no quadrante 3");
            return 0;
        }
    }

    //Condicional para caso a opção escolhida seja a distância
    if(c == 'D' || c == 'd'){
        distancia = sqrt(pow(x, 2) + pow(y, 2));
        printf("A distancia entre os pontos eh de %.2f", distancia);
        return 0;
    }
    return 0;
}