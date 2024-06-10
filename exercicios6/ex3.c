#include <stdio.h>

#define NUM_PESSOAS 5
#define NUM_PROPRIEDADES 3

int main(){
    float pesos[NUM_PESSOAS];
    float altura[NUM_PESSOAS];
    float IMC[NUM_PESSOAS];
    
    // Leitura dos dados e cálculo dos IMCs
    for (int i = 0; i < NUM_PESSOAS; i++){
        printf("Informe o peso da pessoa %d: ", i + 1);
        scanf("%f", &pesos[i]);
        printf("Informe a altura da pessoa %d: ", i + 1);
        scanf("%f", &altura[i]);

        IMC[i] = pesos[i] / (altura[i] * altura[i]);
    }
    
    // Exibição das informações
    printf("\nInformações das pessoas:\n");
    for (int i = 0; i < NUM_PESSOAS; i++){
        printf("Pessoa %d - Peso: %.2f - Altura: %.2f - IMC: %.2f\n", i + 1, pesos[i], altura[i], IMC[i]);
    }
    
    return 0;
}
