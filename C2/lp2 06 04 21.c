#include <stdio.h>

int main(){

    int posto[4][5][20],i,j,t;

    for(t=0;t<4;t++){
        for(i=0;i<5;i++){
            for(j=0;j<20;j++){
            printf("\nUn.%i Dia %i | Insira o numero de vacinas aplicadas hoje: ", i, j+1);
            scanf("%i",&posto[t][i][j]);
            }
        }
    }

return 0;
}