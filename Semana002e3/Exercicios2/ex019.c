/*Uma empresa possui 3 funcionários. Esta empresa resolveu conceder aumento para os funcionários que possuem mais de 2 dependentes e que ganham menos que um determinado valor de referência. Faça um programa para auxiliar esta empresa a processar essas informações. O programa deve inicialmente ler o valor de referência. A seguir, o programa deve ler as seguintes informações de cada um dos 3 funcionários: código (numérico), número de dependentes e salário atual. O programa deve informar os códigos dos funcionários que ganharão aumento. Além disso, ao fim do programa, ele deve informar a quantidade de funcionários que ganharão aumento.*/

#include <stdio.h>

int main(){
    float referencia, salario1, salario2, salario3;
    int quantidade = 0, cod1, cod2, cod3, dep1, dep2, dep3;

    //Entradas funcionário 1
    printf("Insira o codigo do funcionario 1: ");
    scanf("%d", &cod1);
    printf("Quantos dependentes o funcionaro 1 possui: ");
    scanf("%d", &dep1);
    printf("Qual eh o salario do funcionario 1: ");
    scanf("%f", &salario1);

    //Entradas funcionário 2
    printf("Insira o codigo do funcionario 2: ");
    scanf("%d", &cod2);
    printf("Quantos dependentes o funcionaro 2 possui: ");
    scanf("%d", &dep2);
    printf("Qual eh o salario do funcionario 2: ");
    scanf("%f", &salario2);

    //Entradas funcionário 3
    printf("Insira o codigo do funcionario 3: ");
    scanf("%d", &cod3);
    printf("Quantos dependentes o funcionaro 3 possui: ");
    scanf("%d", &dep3);
    printf("Qual eh o salario do funcionario 3: ");
    scanf("%f", &salario3);

    printf("Insira o valor de referencia: ");
    scanf("%f", &referencia);

    //Condicionais de cada funcionário
    if(dep1 > 2 && salario1 < referencia){
        quantidade++;
        printf("O funcionario %d vai ganhar aumento\n", cod1);
    }
    if(dep2 > 2 && salario2 < referencia){
        quantidade++;
        printf("O funcionario %d vai ganhar aumento\n", cod2);
    }
    if(dep3 > 2 && salario3 < referencia){
        quantidade++;
        printf("O funcionario %d vai ganhar aumento\n", cod3);
    }
    printf("A quantidade de funcionarios que ganharao aumento eh de %d", quantidade);
    return 0;
}