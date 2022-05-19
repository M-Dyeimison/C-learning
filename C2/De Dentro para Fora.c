#include <stdio.h>

int main(){

    char caractere, string2[100];
    int N, i = 0,j,k,p=0,tam;

    scanf("%i", &N);
    char string[N][100];
    getchar();

    for(j=0;j<N;j++){

        i = 0;
        p = 0;
        do{
        caractere = getchar();
        string[j][i] = caractere;
        i++;
        }while(caractere != '\n');
        string[j][i-1] = '\0';

        tam = i-1;
        for(k = (tam/2)-1;k>=0;k--){
            string2[p] = string[j][k];
            p++;
        }

        for(k = tam-1;k>=tam/2;k--){
            string2[p] = string[j][k];
            p++;
        }
        
        string2[p] = '\0';

        printf("%s\n",string2);
    }

    return 0;
}