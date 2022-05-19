#include <stdio.h>

void main(){

int bim,alunos;

printf("\nNumero de bimestres: ");
scanf("%i",&bim);
printf("\nNumero de alunos: ");
scanf("%i",&alunos);


float matriz[alunos][bim],media[alunos];
int i,i2;

for(i=0;i<alunos;i++){
    for(i2=0;i2<bim;i2++){
        printf("\nAluno %i, nota %i: ",i+1,i2+1);
        scanf("%f",&matriz[i][i2]);
        media[i] += (matriz[i][i2]/bim);
    }
}

for(i=0;i<alunos;i++){
    printf("\nMedia %i: %.2f",i+1,media[i]);
}

system("pause");
}
