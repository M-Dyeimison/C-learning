#include <stdio.h>

int main(){

    int posto[5][20],totalposto[5],a=0,b=0,i,j,t;

    for(i=0;i<5;i++){
        a=0;
        for(j=0;j<20;j++){
            printf("\nUn.%i Dia %i | Insira o numero de vacinas aplicadas hoje: ", i, j+1);
            scanf("%i",&posto[i][j]);
            a+=posto[i][j];
        }
        totalposto[i]=a;
        b+=totalposto[i];
    }

    printf("\nNumero total de vacinas aplicadas no posto(?): ");
    scanf("%i",&i);
    printf("%i\n",totalposto[i]);

    printf("\nNumero total de vacinas aplicadas no dia(?): ");
    scanf("%i",&j);

    for(i=0;i<5;i++){
        t+=posto[i][j];
    }

    printf("%i\n",t);

    printf("\nNumero total de vacinas aplicadas: %i",b);

return 0;
}