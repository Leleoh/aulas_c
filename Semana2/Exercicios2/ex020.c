/*Faça um programa para auxiliar o IBGE a processar dados de uma entrevista. O programa deve inicialmente ler a idade de uma pessoa. Se esta pessoa tiver idade inferior a 18 anos, o programa deve finalizar, informando que a pessoa é menor de idade. Caso a idade seja superior a 18 anos, o programa deve perguntar se esta pessoa trabalha. A resposta deve ser lida como um caractere (S para sim e N para Não). Caso a pessoa trabalhe, o programa deve ler o salário mensal da pessoa e o número de horas que ela trabalha por mês e deve informar quanto esta pessoa ganha por hora trabalhada. Caso a pessoa não trabalha o programa deve finalizar, informando que a pessoa não trabalha.*/

#include <stdio.h>

int main(){
    //Variáveis
    int idade, horas_trabalhadas_dia, horas_trabalhadas_mes;
    char trabalha;
    float salario, ganho_hora;
    printf("Insira a idade: ");
    scanf("%d", &idade);

    //Condicionais
    if(idade < 18){
        printf("Eh menor de idade");
        return 0;
    }
    if(idade >= 18){
        printf("Trabalha [S] [N]: ");
        scanf(" %c", &trabalha);
        if(trabalha == 'N' || trabalha == 'n'){
            printf("Nao trabalha");
            return 0;
        }
        if(trabalha == 'S' || trabalha == 's'){
            printf("Insira o salario: ");
            scanf("%f", &salario);
            printf("Quantas horas trabalhadas por dia: ");
            scanf("%d", &horas_trabalhadas_dia);
            horas_trabalhadas_mes = horas_trabalhadas_dia * 22; //Cálculo com base em um mês de 22 dias trabalhados
            ganho_hora = salario / horas_trabalhadas_mes;
            printf("O ganho por hora eh de %.2f reais", ganho_hora);
        }
    }

    return 0;
}