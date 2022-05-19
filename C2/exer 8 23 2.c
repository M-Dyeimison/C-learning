#include <stdio.h>

void main(){

int i,b;

for(i=2;i<=10;i++){
    printf("\n\n----------------------------------------\n");
    for(b=1;b<=10;b++){
        printf("\n%i*%i = %i",i,b,i*b);
    }
}

printf("\n\n----------------------------------------\n");

system("pause");
}
