#include <stdio.h>

int main(){

    char O[2];
    float M[12][12], soma = 0;
    int i, j, y=0;

    scanf("%s",&O);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f",&M[i][j]);
        }
    }

    for(i=0;i<11;i++){
        y++;
        for(j=0;j<12-y;j++){
            soma += M[i][j];
        }
    }

    if(O[0] == 'S'){
        printf("%.1f\n",soma);
    }else{
        printf("%.1f\n", soma/66);
    }

    return 0;
}