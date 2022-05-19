#include <stdio.h>

int main(){

    struct horario{
        int horas;
        int minutos;
        int segundos;
    }agora = {10,20,30};

    struct horario agora;

    struct horario agora = {.minutos = 10};

    agora.horas = 15;
    agora.minutos = 25;
    agora.segundos = 35;

    return 0;
}