/*Esse programa calcula o peso ideal de uma pessoa baseado em certas informações entradas no computador, como altura e sexo*/
#include <stdio.h>

int main(){
    float altura, pesoideal;  //Declaração de variáveis
    char sexo;
    printf("Insira seu sexo (M) ou (F): ");  //Entrada de gênero
    scanf(" %c", &sexo);
    if (sexo == 'F' || sexo == 'f'){  //Condição para caso seja feminino
        printf("O sexo informado foi o feminino!\n");
        printf("Digite a sua altura em M: "); //Entrada altura
        scanf("%f", &altura);
        pesoideal = (62.1 * altura) - 44.7;     //Cálculo peso ideal
        printf("O seu peso ideal seria de %.1f KG", pesoideal);
    }
    else if (sexo == 'M' || sexo == 'm'){  //Condição para caso seja masculino
        printf("O sexo informado foi o masculino!\n");
        printf("Digite a sua altura em M: ");  //Entrada altura
        scanf("%f", &altura);
        pesoideal = (72.7 * altura) - 58; //Cálculo peso ideal
        printf("O seu peso ideal seria de %.1f KG", pesoideal);
    }
    return 0; //Fim
}