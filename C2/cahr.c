#include <stdio.h>
#include <string.h>

void main(){
    char nome[20], nome2[3][20];
    int i;

    printf("\nNome: ");
    scanf("%s",&nome);
    printf("\nNomef: %s",nome);

    for(i=0;i<3;i++){
        printf("\nNome %i = ",i);
        scanf("%s",&nome2[i]);
    }

    for(i=0;i<3;i++){
        printf("\nNome %i: %s",i,nome2[i]);
    }
}