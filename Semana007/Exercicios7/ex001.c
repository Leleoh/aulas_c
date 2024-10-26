#include <stdio.h>

int main() {
    float notas[4][4];
    float media[4];
    int i, j;

    // Loop para ler e guardar as notas na matriz
    for (i = 0; i < 4; i++) {
        float soma = 0;  // Variável soma para acumular as notas do aluno i
        for (j = 0; j < 4; j++) {
            printf("Insira a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];  // Soma das notas do aluno i
        }
        media[i] = soma / 4;  // Calcula a média do aluno i e armazena no vetor media
    }

    // Loop para imprimir a matriz de notas (opcional)
    printf("\nMatriz de Notas:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%.1f ", notas[i][j]);
        }
        printf("\n");
    }

    // Loop para exibir as médias de cada aluno
    printf("\nMédias dos Alunos:\n");
    for (i = 0; i < 4; i++) {
        printf("Média do aluno %d: %.2f\n", i + 1, media[i]);
    }

    return 0;
}
