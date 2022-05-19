#include <stdio.h>

int main(){
    int idade[50], abaixo=0, mvelho=0,i;
    float midade=0, menor=0;

    for(i=0;i<50;i++){
        printf("Insira a idade n%i: ",i+1);
        scanf("%i",&idade[i]);
        if(idade[i]>mvelho){
            mvelho=idade[i];
        }
        if(idade[i]<18){
            menor++;
        }
        midade+=idade[i];
    }

    midade=midade/50;

    for(i=0;i<50;i++){
        if(idade[i]<midade){
            abaixo++;
        }
    }

    printf("\nMedia das idades: %.2f",midade);
    printf("\nNumero de pessoas com idade abaixo da media: %i", abaixo);
    printf("\nPorcentagem de menores de idade: %.2f",menor*2;
    printf("\nIdade do mais velho: %i", mvelho);

    return 0;
}