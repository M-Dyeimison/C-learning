#include <stdio.h>

void main(){

int i,v[10];

for(i = 0;i <= 10;i++){
    printf("\nv%i = ",i);
    scanf("%i", &v[i]);
}

for(i = 0;i <= 10;i++){
    printf("\nV[%i] = %i",i,v[i]);
}
printf("\n");

system("pause");
}
