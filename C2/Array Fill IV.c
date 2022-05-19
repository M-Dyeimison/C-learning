#include <stdio.h>

int main(){

    int x[15], r, i, p = 0, i2 = 0, par[5], impar[5], j, j2;

    for(i=0;i<15;i++){
        scanf("%i",&x[i]);
    }

    for(i=0;i<15;i++){
        r = x[i]%2;
        if(r==0){
            par[p] = x[i];
            p++;
            if(p == 5){
                for(j2=0;j2<5;j2++){
                    printf("par[%i] = %i\n", j2, par[j2]);
                }
                p=0;
            }
        }else{
            impar[i2] = x[i];
            i2++;
            if(i2 == 5){
                for(j=0;j<5;j++){
                    printf("impar[%i] = %i\n", j, impar[j]);
                }
                i2=0;
            }
        }
    }

    

for(i=0;i<i2;i++){
    printf("impar[%i] = %i\n", i, impar[i]);
}

for(i=0;i<p;i++){
    printf("par[%i] = %i\n", i, par[i]);
}

    return 0;
}