/*Esse código vai calcular três notas de um aluno e medir a média do seu desempenho levando em consideração o peso de cada avaliação*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float prova1,prova2,prova3, somanota, notafinal;
    int peso1,peso2,peso3;
    printf("Informe a nota da sua prova de peso 2: ");
    scanf("%f", &prova1);
    printf("Informe a nota da sua prova de peso 3: ");
    scanf("%f", &prova2);
    printf("Informe a nota da sua prova de peso 5: ");
    scanf("%f", &prova3);
    peso1 = 2; 
    peso2 = 3; 
    peso3 = 5;
    somanota = prova1 * peso1 + prova2 * peso2 + prova3 * peso3;
    notafinal = somanota/(peso1 + peso2 + peso3);
    printf("A sua média final é de: %2.f pontos", notafinal);
    return 0;
}