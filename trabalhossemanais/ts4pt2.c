/*Esse programa irá ler o número de pessoas entrevistadas e operar com os valores fornecidos para no fim devolver certas informações baseadas nas que foram inseridas, como sexo, salário e média de idade.*/
#include <stdio.h>

int main(){
    int entrevistados, npessoas, psminimo, mulheres, idade, idadetotal, salario; 
    float idademedia; //Declaração de variáveis
    char sexo;
    idadetotal = mulheres = psminimo = 0;
    printf("Quantas pessoas foram entrevistadas: "); //Entrada de início
    scanf("%d", &entrevistados);
    if (entrevistados <= 0){
        printf("Nao foram entrevistadas pessoas"); //Verificação de valor 0 ou negativo
        return 0;
    }
    for (npessoas = 1; npessoas <= entrevistados; npessoas++){
        printf("Idade do entrevistado %d: ", npessoas);
        scanf("%d", &idade);            //Entrada e armazenamento de idade
        idadetotal += idade;

        printf("Sexo do entrevistado %d (M/F): ",npessoas);
        scanf(" %c", &sexo);
        if (sexo == 'f' || sexo == 'F'){            //Entrada e armazenamento de gênero
            mulheres += 1;
        }

        printf("O salario do entrevistado %d eh: ", npessoas);
        scanf("%d", &salario);
        if (salario <= 2000){       //Entrada e verificação de salário
            psminimo ++;
        }       
    }
    idademedia = (float)idadetotal/entrevistados;  //Cálculo de idade média
    printf("A media de idade eh: %.1f anos\n", idademedia);
    printf("A quantidade de pessoas que recebem menos de R$ 2000 eh: %d \n", psminimo);
    printf("O numero de mulheres entrevistadas eh: %d", mulheres);
    return 0;
    //fim
}