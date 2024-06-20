/*. Faça um algoritmo que leia dois números inteiros positivos com 3 dígitos cada e gere um terceiro número inteiro com 6 dígitos, sendo que estes sejam os dígitos dos dois primeiros intercalados. Exemplo: Numero_1 = 135,Numero_2 = 246,Numero_3 = 123456*/

#include <stdio.h>

int main(){
    //Declarando as variáveis
    int num1, num2, num3;
    int dig1_num1, dig2_num1, dig3_num1;
    int dig1_num2, dig2_num2, dig3_num2;

    //Entradas
    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);

    //Separando os dígitos do primeiro número
    dig1_num1 = num1 / 100; //Centena
    dig2_num1 = (num1 / 10) % 10; //Dezena
    dig3_num1 = num1 % 10;  //Unidade

    //Separando os dígitos do segundo número
    dig1_num2 = num2 / 100; //Centena
    dig2_num2 = (num2 / 10) % 10; //Dezena
    dig3_num2 = num2 % 10; //Unidade

    //"Construindo o número, algarismo por algarismo"
    num3 = (dig1_num1 * 100000) + (dig1_num2 * 10000) + (dig2_num1 * 1000) + (dig2_num2 * 100) + (dig3_num1 * 10) + dig3_num2;

    //Saída final
    printf("O resultado final ficou %d", num3);
    return 0;
}