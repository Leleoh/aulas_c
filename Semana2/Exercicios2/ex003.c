/*Tendo como dados de entrada a altura e o sexo (M ou F) de uma pessoa, construa um programa para calcular seu peso ideal, utilizando as seguintes fórmulas: - Para Homens: ( 72.7 * altura ) - 58; - Para Mulheres: ( 62.1 * altura) - 44.7*/

#include <stdio.h>

int main(){

    //Variáveis
    char sexo; 
    float altura, peso_ideal;

    //Entradas
    printf("[M] ou [F]: ");
    scanf(" %c", &sexo);
    printf("Insira sua altura em metros: ");
    scanf("%f", &altura);

    //Verificações condicionais
    if(sexo == 'M' || sexo == 'm'){
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal seria %.1f KG", peso_ideal); //Saída
    }
    if(sexo == 'F' || sexo == 'f'){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal seria %.1f KG", peso_ideal); //Saída
    }
    return 0;
}


//Obs: A comparação com caracteres deve ser feita com aspas simples