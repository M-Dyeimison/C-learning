#include <stdio.h>

void main(){

int a,i,c,d;

printf("\nA = ");
scanf("%i",&a);

c = a;

while(a > 1){
    a = a/10;
    i++;
}

printf("\nA = ");

while(i > -1){
    i--;
    d = c%10;
    c = c/10;
    printf("%i",d);
}

printf("\n");

system("pause");
}
