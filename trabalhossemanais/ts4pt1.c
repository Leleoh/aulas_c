/*Esse programa irá ler dois numeros inteiros e calcular a quantidade de números primos existente entre eles, incluindo os extremos (próprios números) caso esses forem primos. Após isso, será feita uma soma com todos os valores encontrados e o resultado final será apresentado na tela.*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, i, inicio, fim, c, primo; //Declaração das variáveis
    int somaprimos = 0, temprimos = 0; //Declaração das variáveis
    printf("Escolha um número inteiro positivo: "); //Entrada 1
    scanf("%d", &num1);
    printf("Escolha outro número inteiro positivo: "); //Entrada 2
    scanf("%d", &num2);
    if (num1 > num2){
        inicio = num1;   //Bloco para caso os valores tenham sido informados em ordem correta de grandeza
        fim = num2;
    }
    else{
        inicio = num2;   //Bloco para caso o valor 1 seja maior do que o valor 2, necessitando troca de ordem
        fim = num1;
    }
    if (inicio < 0 || fim < 0){
        printf("Erro na escolha dos números!"); //Verificação de positividade
        return 0;
    }
    else if (inicio == fim){
        printf("Erro na escolha dos números!"); //Verificação de números iguais
        return 0;
    }
    printf("Números primos entre %d e %d:\n", fim, inicio);
    for (i = fim; i <= inicio; i++){    //Contagem entre o intervalo
        primo = 1;
        if (i <= 1){   
            primo = 0;  //Caso o número seja menor que 1, não haverá primo
        }
        else{
            for(c = 2; c * c <= i; c++){
                if (i % c == 0){
                    primo = 0;      //Contador
                    break;
                }
            }
        }
        if(primo == 1){
            printf("%d ", i);
            somaprimos += i;    //Verificação e somatório
            temprimos = 1;      
        }
    }
    if (temprimos){
        printf("\nA soma de todos os primos é: %d", somaprimos); //Resultado da soma dos números primos do intervalo
        return 0;
    }
    else{
        printf("Não foram encontrados números primos nesse intervalo!"); //Condição caso não tenham sido encontrados números primos no intervalo
    }
    return 0;
}
