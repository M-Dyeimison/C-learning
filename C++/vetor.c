#include <stdio.h>
#include <stdlib.h>

void main(){
int x,y,z=3,w[z];
for(y=0;y<z;y++){
    printf("Insira um valor: \n");
    scanf("%d",&w[y]);
}
printf("Y: %d\n", y);
for(y=0;y<z;y++){
    printf("Esse e o valor de w - %d: %d\n",y+1,w[y]);
}
system("pause");
}
