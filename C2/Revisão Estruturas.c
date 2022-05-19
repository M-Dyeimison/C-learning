#include <stdio.h>

struct horario{
    int hora;
    int minuto;
    int segundo;
};

int main(){

    void receberhorarios(struct horario lista[5]);
    void printfhorarios(struct horario lista[5]);
    struct horario listahorarios[5];

    receberhorarios(listahorarios);
    printfhorarios(listahorarios);

    return 0;
}

void receberhorarios(struct horario lista[5]){
    int i;
    for(i = 0; i < 5; i++){
        printf("Digite o %i horario (hh:mm:ss):", i+1);
        scanf("%i:%i:%i",&lista[i].hora,&lista[i].minuto,&lista[i].segundo);
    }
}
void printfhorarios(struct horario lista[5]){
    int i;
    for(i = 0; i < 5; i++){
        printf("O %i horario e = %i:%i:%i\n",i+1,lista[i].hora,lista[i].minuto,lista[i].segundo);
    }
}