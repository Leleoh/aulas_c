#include <stdio.h>

int main(){
    int idade, entrevistados, abaixo2k = 0, mulheres = 0;
    char sexo;
    float salario, media_idade, idade_total = 0;

    printf("Insira o numero de entrevistados: ");
    scanf("%d", &entrevistados);
    for(int i = 1; i <= entrevistados; i++){
        printf("Idade da pessoa %d: ", i);
        scanf("%d", &idade);
        idade_total += idade;
        printf("Sexo da pessoa %d [M][F]: ", i);
        scanf(" %c", &sexo);
        if(sexo == 'f' || sexo == 'F'){
            mulheres += 1;
        }
        printf("Salario da pessoa %d: ", i);
        scanf("%f", &salario);
        if(salario <= 2000){
            abaixo2k += 1;
        }
    }

    media_idade = idade_total/entrevistados;
    printf("A media de idade foi de %.1f anos", media_idade);
    printf("\nA quantidade de pessoas abaixo de 2000 reais foi de %d pessoas", abaixo2k);
    printf("\nO total de mulheres entrevistadas foi de %d", mulheres);
    return 0;
}