#include <stdio.h>
#include <stdlib.h>

void main(){
int x,y,z;
printf("Digite os valores de X, Y e Z: \n");
scanf("%d %d %d",&x,&y,&z);
for(x!=y;x>=y;x=x-z){
    printf("X-%d: %d\n",z,x);
}
system("pause");
}
