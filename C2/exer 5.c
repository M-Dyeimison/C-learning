#include <stdio.h>

void main(){

int matriz[3][3],i,i2;

for(i=0;i<3;i++){
    for(i2=0;i2<3;i2++)
    {
       printf("\nInsira um valor para X[%i][%i]:\n",i,i2);
       scanf("%i",&matriz[i][i2]);
    }
}

for(i=0;i<3;i++){
    for(i2=0;i2<3;i2++)
    {
       printf(" X[%i][%i]: %i",i,i2,matriz[i][i2]);
    }
    printf("\n");
}

system("pause");
}
