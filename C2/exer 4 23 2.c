#include <stdio.h>

void main(){

int n,i;
float x,x1=0;

printf("\nQuantos produtos serao contabilizados? ");
scanf("%i",&n);

for(i=1;i<=n;i++){
    printf("\nInsira o valor do %i produto: ",i);
    scanf("%f",&x);
    x1+=x;
}

printf("\nValor da compra = %.2f\n",x1);

system("pause");
}
