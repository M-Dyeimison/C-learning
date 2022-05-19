#include <stdio.h>

int main(){

    char alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char coded[51], caractere;
    char decoded[51], rotacao[100];
    int i, j, N, n, k, l, l2=2, m, m2;

    scanf("%i",&N);

    for(i=0;i<N;i++){
        getchar();

        j = 0;
        do{
            caractere = getchar();
            coded[j] = caractere;
            j++;
        }while(caractere != '\n');

        scanf("%i",&n);

        for(l=0;l<26;l++){
            rotacao[l+n] = alfabeto[l];
        }

        for(l=0;l<n;l++){
            if(rotacao[l] != alfabeto[26-n+l]){
                rotacao[l] = alfabeto[26-n+l];
            }
        }

        for(m=0;m<j;m++){
            for(m2=0;m2<26;m2++){
                if(coded[m] == alfabeto[m2]){
                    decoded[m] = rotacao[m2];
                    printf("%c", decoded[m]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}