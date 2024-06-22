/*F A Ç A U M P R O G R A M A Q U E L Ê O N Ú M E R O D E U M V E N D E D O R , S E U S A L Á R I O F I X O E O T O T A L D E V E N D A S P O R E L E 2 E F E T U A D A S N O M Ê S . A C R E S C E N T A R A O S A L Á R I O U M P R Ê M I O , C O N F O R M E A S E G U I N T E T A B E L A :*/

#include <stdio.h>

int main(){
    //Variáveis
    int numero, vendas;
    float salario;

    //Entradas
    printf("Qual o numero do vendedor: ");
    scanf("%d", &numero);
    printf("Qual o salario do vendedor %d:", numero);
    scanf("%f", &salario);
    printf("Quantas vendas ele fez no mes: ");
    scanf("%d", &vendas);

    //Condicionais
    if(100 < vendas && vendas <= 500){
        printf("O salario do vendedor ganhou R$50 de bonus, ficando em %.2f reais", salario+50);
    }
    if(500 < vendas && vendas <= 750){
        printf("O salario do vendedor ganhou R$70 de bonus, ficando em %.2f reais", salario+70);
    }
    if(vendas > 750){
        printf("O salario do vendedor ganhou R$100 de bonus, ficando em %.2f reais", salario+100);
    }
    return 0;
}