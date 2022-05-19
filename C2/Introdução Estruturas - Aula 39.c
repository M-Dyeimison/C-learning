#include <stdio.h>

int main(){

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
    };

    struct horario agora;

    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 10/6.0;

    printf("%i\n", depois.horas);
    printf("%i\n", depois.minutos);
    printf("%f\n", depois.teste);

    printf("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);

    return 0;
}