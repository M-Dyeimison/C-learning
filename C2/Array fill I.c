#include <stdio.h>

int main(){

    int N[10],x,i;

    scanf("%i",&x);
    N[0] = x;
    printf("N[0] = %i\n",N[0]);

    for(i=1;i<10;i++){
        N[i] = N[i-1]*2;
        printf("N[%i] = %i\n",i,N[i]);
    }

    return 0;
}