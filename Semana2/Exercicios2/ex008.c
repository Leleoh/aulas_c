/*Faça um programa em C que lê o preço unitário de 3 produtos comprados por um cliente hipotético e um determinado valor de referência. O programa deve: Calcular o preço médio dos produtos. Se o valor de referência for menor que a média, o programa deve determinar quais dos valores são inferiores ao valor de referência. Se a média for inferior ao valor de referência, o programa deve determinar quais dos valores são inferiores à média*/

#include <stdio.h>

int main(){
    
    //Variáveis
    float preco1, preco2, preco3, ref, preco_medio;

    //Entradas
    printf("Valor do produto 1: ");
    scanf("%f", &preco1);
    printf("Valor do produto 2: ");
    scanf("%f", &preco2);
    printf("Valor do produto 3: ");
    scanf("%f", &preco3);
    printf("Valor referencia: ");
    scanf("%f", &ref);
    preco_medio = (preco1 + preco2 + preco3) / 3; //Cálculo de média
    printf("A media eh %.2f", preco_medio);

    //Condicional 1
    if (ref < preco_medio){
        if(preco1 < ref){
            printf("O produto 1 eh menor do que o valor de referencia");
        }
        if(preco2 < ref){
            printf("O produto 2 eh menor do que o valor de referencia");
        }
        if(preco3 < ref){
            printf("O produto 3 eh menor do que o valor de referencia");
        }
    }
    
    //Condicional 2
    if (ref > preco_medio){
        if(preco1 < preco_medio){
            printf("O produto 1 eh menor do que o valor da media");
        }
        if(preco2 < preco_medio){
            printf("O produto 2 eh menor do que o valor da media");
        }
        if(preco3 < preco_medio){
            printf("O produto 3 eh menor do que o valor da media");
        }
    }

    return 0;
}