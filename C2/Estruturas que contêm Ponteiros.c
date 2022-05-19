#include <stdio.h>

int main(){
    
    struct horario{
        int *phora;
        int *pminuto;
        int *psegundo;
    };

    struct horario hoje;

    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.phora = &hora;
    hoje.pminuto = &minuto;
    hoje.psegundo = &segundo;

    printf("hora - %i\n", *hoje.phora);
    printf("minuto - %i\n", *hoje.pminuto);
    printf("segundo - %i\n", *hoje.psegundo);

    *hoje.psegundo = 100;

    printf("segundo - %i\n", *hoje.psegundo);

    return 0;
}