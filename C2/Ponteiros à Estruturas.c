#include <stdio.h>

int main(){

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    depois = &agora;

    (*depois).hora = 10;
    (*depois).minuto = 10;
    (*depois).segundo = 10;

    printf("\n%i:%i:%i", agora.hora, agora.minuto, agora.segundo);

    depois->hora = 20;
    depois->minuto = 20;
    depois->segundo = 20;

    printf("\n%i:%i:%i", agora.hora, agora.minuto, agora.segundo);
    return 0;
}