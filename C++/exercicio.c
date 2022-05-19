#include <stdio.h>
#include <stdlib.h>

void main(){
    int x;
    int y;

    printf("digite o primeiro valor: \n");
    scanf("%d",&x);
    printf("insira o segundo valor: \n");
    scanf("%d",&y);
    printf("O valor absoluto da diferença dos valores e: %d \n", abs(x-y));
    system("pause");
}
