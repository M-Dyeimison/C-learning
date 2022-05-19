#include <stdio.h>

int main(){

    int N[20],i,x,y=19;

    for(i=0;i<20;i++){
        scanf("%i",&N[i]);
    }

    for(i=0;i<10;i++){
        x = N[y];
        N[y] = N[i];
        N[i] = x;
        y--;
    }

    for(i=0;i<20;i++){
        printf("N[%i] = %i\n",i,N[i]);
    }

    return 0;
}