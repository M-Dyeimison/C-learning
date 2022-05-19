#include <stdio.h>

int main(){

    unsigned long long int Fib[61];
    int T,N,i,j;
    scanf("%i",&T);
    int x[T];

    for(i=0;i<T;i++){
        scanf("%i",&x[i]);
    }

    Fib[0] = 0;
    Fib[1] = 1;

    for(N=2;N<61;N++){
        Fib[N] = Fib[N-1] + Fib[N-2];
    }

    for(i=0;i<T;i++){
        j = x[i];
        printf("Fib(%i) = %llu\n",x[i],Fib[j]);
    }
    
    return 0;
}