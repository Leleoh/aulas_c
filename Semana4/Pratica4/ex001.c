#include <stdio.h>


int main(){
    int n1, n2, soma, temp, i, impar;
    printf("Entre com dois valores: ");
    scanf("%d %d", &n1, &n2);
    if(n1 > n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    printf("Os numeros primos entre %d e %d sao: ", n1, n2);
    for(i = n1; i <= n2; i++){
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0){
            printf(" %d", i);
            soma += i;
        }
    }
    printf("\nA soma dos numeros primos eh: %d", soma);
    return 0;
}