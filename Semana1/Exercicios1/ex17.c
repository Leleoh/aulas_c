/*Faça um programa que lê a quantidade de horas, minutos e segundos transcorridos até o momento desde o início do dia e calcula quantos segundos faltam para o dia terminar.*/

#include <stdio.h>

int main(){
    int horas, minutos, segundos, segundos_totais, segundos_restantes; //Variáveis
    printf("Horas: ");
    scanf("%d", &horas);  
    printf("Minutos: ");
    scanf("%d", &minutos);  //Entradas
    printf("Segundos: ");
    scanf("%d", &segundos);
    segundos_totais = (horas * 3600) + (minutos * 60) + segundos;   //Cálculo transcorrido
    segundos_restantes = 86400 - segundos_totais;   //Cálculo restantes
    printf("Faltam %d segundos para o dia terminar", segundos_restantes); //Saída
    return 0;
}