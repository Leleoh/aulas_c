/*Esse programa lê e armazena 5 valores inseridos pelo usuário em um vetor, depois de armazenar esses valores, o programa pede input de um outro valor e verifica se esse novo valor informado já existe no vetor. Caso exista, ele vai mostrar em qual posição está esse número no vetor*/

#include <stdio.h>
//Variáveis
int i, novonum, encontrado;

int main(){
    //Criação do vetor
    int numeros[5];
    //Início da requisição
    printf("Digite um numero inteiro: ");
    //Loop para percorrer o vetor
    for (i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
    }
    //Novo valor a ser informado
    printf("Informe outro valor: ");
    scanf("%d", &novonum);
    //Loop de igualdade para o vetor, a fim de descobrir se o número informado já existe ou não
    for (i = 0; i < 5; i++){
        if (novonum == numeros [i]){
            printf("Numero ja informado antes na posicao %d", numeros[i]);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado){
        printf("O novo numero informado nao existe no vetor");
    }
    return 0;
}