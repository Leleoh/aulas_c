/*. Faça um programa que armazena informações de 5 pessoas em 3 vetores de 5 posições. No primeiro vetor, são armazenados os pesos de cada pessoa, no segundo vetor, são armazenadas as alturas de cada pessoa. No terceiro vetor são armazenados os IMCs de cada pessoa. O programa deve ler o peso e a altura de cada pessoa e armazenar as informações nos vetores correspondentes. Além disso, ele deve calcular o IMC de cada pessoa e armazená-lo no vetor correspondente. Uma mesma posição, nos 3 vetores, armazena informações de uma mesma pessoa. 𝑖𝑚𝑐 = 𝑝𝑒𝑠𝑜/𝑎𝑙𝑡𝑢𝑟𝑎2*/

#include <stdio.h>

int main(){
    int i; 
    float imc[5], alturas[5], pesos[5];

    //Laço para inserir os pesos e as alturas nos vetores
    for(i = 0; i < 5; i++){
        printf("Insira o peso em KG da pessoa %d:", i+1);
        scanf("%f", &pesos[i]);

        printf("Insira a altura em metros da pessoa %d:", i+1);
        scanf("%f", &alturas[i]);

        imc[i] = (pesos[i] / (alturas[i] * alturas[i]));     
    }
    for(i = 0; i < 5; i++){
        printf("\nO IMC da pessoa %d eh %.2f", i+1, imc[i]);
    }

    return 0;
}