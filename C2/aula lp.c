#include <stdio.h>
#include <string.h>

void main(){
    int idade[13],i=0,b=0,velho=0;
    char nome[13][20];

    printf("\n------------------------------------\n");

    for(i=0;i<13;i++){
        printf("Nome: ");
        scanf("%s",&nome[i]);
        printf("Idade: ");
        scanf("%i",&idade[i]);
        printf("\n");

        if(idade[i]>velho){
            velho=idade[i];
            b=i;
        }
    }

    printf("\n------------------------------------\n");
    for(i=0;i<13;i++){
        printf("Nome: %s\n",nome[i]);
        printf("Idade: %i\n",idade[i]);
        printf("\n");
    }

    printf("%s e a pessoa mais velha, com %i",nome[b],velho);
    printf("\n------------------------------------\n");
}