#include <stdio.h>

int main(){

    char O[2];
    float M[12][12], soma = 0;
    int i, j, y=1;

    FILE *file;
    file =fopen("numerosdireita.txt", "r");

    scanf("%s",&O);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            fscanf(file, "%f", &M[i][j]);
        }
    }

    for(i=1;i<6;i++){
        for(j=12-y;j<12;j++){
            soma += M[i][j];
        }
        y++;
    }

    y = 1;

    for(i=6;i<12;i++){
        for(j=6+y;j<12;j++){
            soma += M[i][j];
        }
        y++;
    }

    if(O[0] == 'S'){
        printf("%.1f\n",soma);
    }else{
        printf("%.1f\n", soma/30);
    }

fclose(file);

    return 0;
}