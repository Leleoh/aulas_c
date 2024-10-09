/*Faça uma função tipada chamada absoluto que recebe um valor inteiro e retorna o seu valor absoluto, sem utilizar nenhuma função da biblioteca math.h. O objetivo é pensar em como seria implementável a função abs dessa biblioteca.*/
#include <stdio.h>

int retornaAbsoluto(int a){
    if(a < 0){
        a = a * -1;
        return a;
    }
    else{
        return a;
    }
}
int main(){
    int n1, resultado;
    printf("Insira um numero positivo ou negativo: ");
    scanf("%d", &n1);
    resultado = retornaAbsoluto(n1);
    printf("O modulo do numero eh %d", resultado);

    return 0;
}