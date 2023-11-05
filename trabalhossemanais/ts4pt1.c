/*Esse programa ir� ler dois numeros inteiros e calcular a quantidade de n�meros primos existente entre eles, incluindo os extremos (pr�prios n�meros) caso esses forem primos. Ap�s isso, ser� feita uma soma com todos os valores encontrados e o resultado final ser� apresentado na tela.*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, i, inicio, fim, c, primo; //Declara��o das vari�veis
    int somaprimos = 0, temprimos = 0; //Declara��o das vari�veis
    printf("Escolha um n�mero inteiro positivo: "); //Entrada 1
    scanf("%d", &num1);
    printf("Escolha outro n�mero inteiro positivo: "); //Entrada 2
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
        printf("Erro na escolha dos n�meros!"); //Verifica��o de positividade
        return 0;
    }
    else if (inicio == fim){
        printf("Erro na escolha dos n�meros!"); //Verifica��o de n�meros iguais
        return 0;
    }
    printf("N�meros primos entre %d e %d:\n", fim, inicio);
    for (i = fim; i <= inicio; i++){    //Contagem entre o intervalo
        primo = 1;
        if (i <= 1){   
            primo = 0;  //Caso o n�mero seja menor que 1, n�o haver� primo
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
            somaprimos += i;    //Verifica��o e somat�rio
            temprimos = 1;      
        }
    }
    if (temprimos){
        printf("\nA soma de todos os primos �: %d", somaprimos); //Resultado da soma dos n�meros primos do intervalo
        return 0;
    }
    else{
        printf("N�o foram encontrados n�meros primos nesse intervalo!"); //Condi��o caso n�o tenham sido encontrados n�meros primos no intervalo
    }
    return 0;
}
