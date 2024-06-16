/*Esse programa vai calcular a distância entre dois pontos quaisquer no plano cartesiano bidimensional*/

#include <stdio.h>
#include <math.h>

int main(){
    int Xi, Xf, Yi, Yf; //Declaração variáveis
    float dist;
    printf("Insira seu Xi e Yi: ");
    scanf("%d%d", &Xi, &Yi);    //Entrada ponto inicial
    printf("Insira seu Xf e Yf: ");
    scanf("%d%d", &Xf, &Yf);    //Entrada ponto final
    dist = sqrt(pow(Xf - Xi, 2) + pow(Yf - Yi, 2)); //Cálculo da distância entre dois pontos
    printf("A distancia entre os pontos %d %d e os pontos %d %d e de %.2f", Xi, Yi, Xf, Yf, dist);
    return 0;
}