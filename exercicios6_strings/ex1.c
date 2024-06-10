#include <stdio.h>
#include <string.h>

#define TAM 30

int main(){
    char nome[TAM + 1];
    puts("Digite uma string: ");
    fgets(nome, TAM + 1, stdin);
    printf(nome);
    printf(strlen(nome));

}