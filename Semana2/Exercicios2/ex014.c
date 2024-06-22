/*Escrever um programa que lê um conjunto de 6 valores: X1, X2, Y1, Y2, Z1, Z2,
que representam as coordenadas cartesianas de 3 pontos: P1(X1, X2), P2(Y1, Y2),
P3(Z1, Z2). Calcule a distância entre P1 e P2, P1 e P3, P2 e P3*/
//Se os segmentos de reta formam um triângulo, calcular e escrever a área deste triângulo

#include <stdio.h>
#include <math.h>

int main(){
    //Variáveis
    float x1,x2,y1,y2,z1,z2; 
    float distanciap1p2, distanciap1p3, distanciap2p3; 
    float area, p;

    //Entradas
    printf("Insira X1 e X2: ");
    scanf("%f%f", &x1, &x2);
    printf("Insira Y1 e Y2: ");
    scanf("%f%f", &y1, &y2);
    printf("Insira Z1 e Z2: ");
    scanf("%f%f", &z1, &z2);

    //Cálculo distância dos pontos
    distanciap1p2 = sqrt(pow(y1 - x1, 2) + pow(y2 - x2, 2));
    distanciap1p3 = sqrt(pow(z1 - x1, 2) + pow(z2 - x2, 2));
    distanciap2p3 = sqrt(pow(z1 - y1, 2) + pow(z2 - y2, 2));
    printf("A distancia entre os pontos P1 e P2 eh de %.2f", distanciap1p2); //Saída distância
    printf("\nA distancia entre os pontos P1 e P3 eh de %.2f", distanciap1p3); //Saída distância
    printf("\nA distancia entre os pontos P2 e P3 eh de %.2f", distanciap2p3); //Saída distância

    //Verificação de triângulo baseada na Lei de formação
    if(distanciap1p2 < distanciap1p3 + distanciap2p3 && distanciap1p3 < distanciap1p2 + distanciap2p3 && distanciap2p3 < distanciap1p2 + distanciap1p3) {
        p = (distanciap1p2 + distanciap1p3 + distanciap2p3) / 2; // Semi-perímetro
        area = sqrt(p * (p - distanciap1p2) * (p - distanciap1p3) * (p - distanciap2p3)); // Heron
        printf("\nA area do triangulo formado pelos segmentos de reta eh %.2f\n", area); // Saída
    }
    return 0;
}