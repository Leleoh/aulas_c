#include <stdio.h>

int main(){
    struct horario{
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;
    agora.horas = 15;
    agora.minutos = 20;
    agora.segundos = 32;

    printf("%d %d %d", agora.horas, agora.minutos, agora.segundos);

    struct horario depois;
    depois.horas = agora.horas + 5;
    depois.minutos = agora.minutos;
    depois.segundos = agora.segundos + 10;

    return 0;
}