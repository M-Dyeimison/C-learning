#include <stdio.h>

void main(){

int a,i,b = 1;

printf("\nInsira o valor: ");
scanf("%i",&a);

for(i = a; i >= 1; i--){
    b *= i;
    printf("\nB = %i", b);
}
printf("\nVALOR = %i",b);
printf("\n");

system ("pause");
}
