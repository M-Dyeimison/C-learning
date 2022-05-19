#include <stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

int main(){

    void recebertime(struct horario time[5]);
    void printftime(struct horario time[5]);
    struct horario watch[5];

    recebertime(watch);
    printftime(watch);

    return 0;
}

void recebertime(struct horario time[5]){
    int i;
    for(i = 0; i < 5; i++){
        printf("Digite o %i horario no formato hh:mm:ss ", i+1);
        scanf("%i:%i:%i",&time[i].horas,&time[i].minutos,&time[i].segundos);
    }
}

void printftime(struct horario time[5]){
    int i;
    for(i = 0; i < 5; i++){
        printf("%i horario = %i:%i:%i\n",i+1,time[i].horas,time[i].minutos,time[i].segundos);
    }
}