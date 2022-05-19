#include <stdio.h>

int main(){

    int i,n,vetor[16],j;

    for(i=1;i<16;i++){
        printf("Valor %i: ", i);
        scanf("%i",&vetor[i]);
    }

    for(j=1;j<16;j++){
        for(i=1;i<16;i++){
            if(vetor[i]>vetor[i+1]){
                n = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = n;
            }
        }
    }

    for(i=14;i>1;i=i-2){
        printf("%i ",vetor[i]);
    }

    for(i=1;i<16;i=i+2){
        printf("%i ",vetor[i]);
    }

    return 0;
}