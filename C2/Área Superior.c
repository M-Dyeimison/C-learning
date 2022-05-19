#include <stdio.h>

int main(){

    char O[2];
    double M[12][12], soma = 0;
    int i, j, y=0, z=12;

    scanf("%s",&O);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }

    for(i=0;i<5;i++){
        y++;
        z--;
        for(j=y;j<z;j++){
            soma += M[i][j];
        }
    }

    if(O[0] == 'S'){
        printf("%.1lf\n",soma);
    }else{
        printf("%.1lf\n", soma/30);
    }

    return 0;
}