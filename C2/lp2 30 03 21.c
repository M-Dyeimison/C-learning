#include <stdio.h>

int main(){

    int notas[3][30],des[3][30],i,i2,x,x2,m=0,b2,b[3];
    float mturma[3],maior;

    printf("\nDigite -1 para parar a insercao de notas\n");

    for(i=0;i<3;i++){
        b2=0;
        m = mturma[i];
        for(i2=0;i2<30;i2++){
            b[i]=b2;
            b2++;
            printf("%i Turma %i nota: ",i+1,i2+1);
            scanf("%i",&notas[i][i2]);
            if(notas[i][i2]==-1){
                i2=30;
            }
            mturma[i]+=notas[i][i2];
        }
        mturma[i]=mturma[i]/b2;
        if(mturma[i]>m){
                maior = mturma[i];
            }
        printf("\n-----------------------------\n");
    }

    for(i=0;i<3;i++){
        for(i2=0;i2<b[i];i2++){
            if(notas[i][i2]>mturma[i]){
                des[i][i2]=notas[i][i2];
            }
        }
    }

    printf("\nNota do aluno, digite o numero do aluno e da turma: ");
    scanf("%i",&x);
    scanf("%i",&x2);
    printf("\nNota: %i",notas[x][x2]);

    printf("\nInsira o numero da turma para receber a media da mesma: ");
    scanf("%i",&x);
    printf("Media da turma = %.2f",mturma[x]);

    printf("\nInsira o numero da turma para saber quais alunos se destacaram na mesma: ");
    scanf("%i",&x);

    for(i2=0;i2<b[x];i2++){
            printf("%i",des[x][i2]);
    }
    
    printf("\nMaior media: %.2f",maior);
     return 0;
}