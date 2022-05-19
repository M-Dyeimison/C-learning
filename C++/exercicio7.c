#include <stdio.h>
#include <stdlib.h>

void main(){
int x,y,z;
printf("Digite os valores de X, Y e Z: \n");
scanf("%d %d %d", &x, &y, &z);
while(x>y){
    while(x != y-1){
        printf("X-%d: %d\n",z,x);
        x = x-z;
}
}
system("pause");
}
