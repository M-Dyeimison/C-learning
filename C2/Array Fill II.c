#include <stdio.h>

int main(){

    int T,T2,T3,N[1000],N2[50],i,j,x=2,z=0;

    scanf("%i",&T);

    N2[0] = 0;
    N2[1] = 1;

    for(i=2;i<T;i++){
        N2[i] = x;
        x++;
    }

    T2 = T;
    T = 1000/T;
    x = 0;

    for(i=0;i<T;i++){
        z = 0;
        for(j=0;j<T2;j++){
            N[x] = N2[z];
            printf("N[%i] = %i\n",x,N[x]);
            x++;
            z++;
        }
    }

    T3 = 1000 - T*T2;
    T3 = 1000 - T3;

    for(i=T3;i<1000;i++){
        z = 0;
        for(j=0;j<T2;j++){
            N[x] = N2[z];
            if(x == 1000){
                break;
            }
            printf("N[%i] = %i\n",x,N[x]);
            x++;
            z++;
        }
    }

    return 0;
}