/*Elabore um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias: - Infantil A: 5 a 7 anos; - Infantil B: 8 a 10 anos; - Juvenil A: 11 a 13 anos; - Juvenil B: 14 a 17 anos; - Sênior: maiores de 18 anos*/

#include <stdio.h>

int main(){
    int idade; //Variável
    printf("Qual a idade do nadador: ");
    scanf("%d", &idade); //Entrada idade
    //Condicional
    if(5 <= idade && idade <= 7){
        printf("Ele faz parte da categoria Infantil A");
    }
    if(8 <= idade && idade <= 10){
        printf("Ele faz parte da categoria Infantil B");
    }
    if(11 <= idade && idade <= 13){
        printf("Ele faz parte da categoria Juvenil A");
    }
    if(14 <= idade && idade <= 17){
        printf("Ele faz parte da categoria Juvenil B");
    }
    if(idade >= 18){
        printf("Ele faz parte da categoria Senior");
    }
    return 0;
}