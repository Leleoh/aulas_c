/*Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja calcular a partir de três notas. Faça um programa que leia as notas, a opção escolhida pelo usuário e calcule a média. - 1-Aritmética; - 2-Ponderada (Pesos: 3, 3, 4); - 3-Harmônica (fórmula a seguir);*/

#include <stdio.h>

int main(){
    //Variáveis
    int opcao;
    float nota1, nota2, nota3, media;

    //Escolha
    printf("[1] Media Aritmetica, [2] Media Ponderada, [3] Media Harmonica.");
    printf("\nEscolha a opcao: ");
    scanf("%d", &opcao);

    //Condicionais
    if(opcao == 1){
        printf("Media aritmetica escolhida\n");
        printf("Insira as notas em sequencia: ");
        scanf("%f%f%f", &nota1, &nota2, &nota3);
        media = (nota1 + nota2 + nota3) / 3;
        printf("A media aritmetica eh %.2f", media);
    }
    if(opcao == 2){
        printf("Media ponderada escolhida\n");
        printf("Insira as notas em sequencia: ");
        scanf("%f%f%f", &nota1, &nota2, &nota3);
        media = ((nota1 * 3) + (nota2 * 3) + (nota3 * 4)) / 10;
        printf("A media ponderada eh %.2f", media);
    }
    if(opcao == 3){
        printf("Media harmonica escolhida\n");
        printf("Insira as notas em sequencia: ");
        scanf("%f%f%f", &nota1, &nota2, &nota3);
        media = 3/((1/nota1) + (1/nota2) + (1/nota3)); //Fórmula média harmônica
        printf("A media ponderada eh %.2f", media);
    }
    return 0;
}