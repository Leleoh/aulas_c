//Quando usamos o ponteiro com * na frente, estamos nos referenciando ao conteúdo que ele carrega, não ao endereço ao qual ele aponta. Quando usamos sem * na frente, estamos tratando diretamente do endereço que ele está apontando.
#include <stdio.h>

int main(){

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    printf("Endereco de x: %p | Valor de x: %d", pX, *pX);
    printf("\nEndereco de y: %p | Valor de y: %f", pY, *pY);
    printf("\nEndereco de z: %p | Valor de z: %c", pZ, *pZ);
    
    typedef struct{
        int hora;
        int minuto;
        int segundo;
    }HORARIO;

    HORARIO agora, *depois;
    depois = &agora;

    depois->hora = 11;
    depois->minuto = 12;
    depois->segundo = 20;

    int somatorio = 100;

    HORARIO antes;
    antes.hora = somatorio + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto + depois->segundo;


    printf("\n%d:%d:%d", agora.hora, agora.minuto, agora.segundo);
    printf("\n%d:%d:%d", antes.hora, antes.minuto, antes.segundo);

    typedef struct{
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    }HORA;

    HORA hoje;
    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    printf("\nHora: %d", *hoje.pHora);
    printf("\nHora: %d", *hoje.pMinuto);
    printf("\nHora: %d", *hoje.pSegundo);

    return 0;
}