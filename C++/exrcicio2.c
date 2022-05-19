#include <stdio.h>
#include <stdlib.h>

void main(){
    int x;
    int y;
    int z;

    printf("insira os valores requiridos: \n");
    scanf("%d %d %d",&x, &y, &z);
    int w = x*y*z;
    printf("O valor de w e: %d \n", w);
    system("pause");
}
