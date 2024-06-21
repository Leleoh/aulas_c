/*Faça um programa que lê dois valores inteiros n1 e n2 e verifica se n1 é múltiplo de n2. Caso seja múltiplo, o programa deve exibir uma mensagem informando isso*/

#include <stdio.h>

int main(){
    int n1,n2;  //Variáveis
    printf("Insira n1 e n2: ");
    scanf("%d%d", &n1, &n2);    //Entrada dos dois números
    if(n1 % n2 == 0){
        printf("Eh multiplo");  //Saída caso a condição seja atendida
    }
    return 0;
}
