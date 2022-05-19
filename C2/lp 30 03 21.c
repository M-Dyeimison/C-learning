#include <stdio.h>

int main(){
    int idade[5][13],menor[5],i,i2,n=0;
    float media[5]={0,0,0,0,0};

    for(i=0;i<5;i++){
        for(i2=0;i2<13;i2++){
            printf("%i Grupo idade %i: ",i+1,i2+1);
            scanf("%i",&idade[i][i2]);
            media[i]+=idade[i][i2];
        }
        media[i]=media[i]/13;
        printf("\n------------------\n");
    }

    for(i=0;i<5;i++){
        n=0;
        for(i2=0;i2<13;i2++){
            if(idade[i][i2]<media[i]){
                n++;
                menor[i]=n;
            }
        }
        printf("\n%i Grupo possui %i menores", i+1, menor[i]);
        printf("\n");
    }

    return 0;
}