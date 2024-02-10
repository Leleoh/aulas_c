/*Esse programa lê e armazena 5 valores inseridos pelo usuário em um vetor, depois de armazenar esses valores, o programa pede input de um outro valor e verifica se esse novo valor informado já existe no vetor. Caso exista, aparece um aviso, caso não exista, aparece outro aviso*/
#include <stdio.h>

int main(){
    //Declaração variáveis
    int numeros[5];
    int novonum, encontrado;
    //Início da requisição
    printf("Insira um numero inteiro: ");
    //Loop para preencher o vetor
    for (int i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
    }
    //Novo número requisitado
    printf("Insira outro numero: ");
    scanf("%d", &novonum);
    //Loop de verificação de igualdade do novo número
    for (int i = 0; i < 5; i++){
        if (novonum == numeros[i]){
            printf("Esse numero ja foi informado antes");
            encontrado = 1;
        }
    }
    //Negação do encontrado, assumindo que caso ele se mantenha como 0
    if (!encontrado){
        printf("Numero nao informado anteriormente");
    }
    //Fim
    return 0;
}