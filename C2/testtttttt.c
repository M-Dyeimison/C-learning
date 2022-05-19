#include <stdio.h>

int main(){

    int N,i, menor, posicao;
    scanf("%i",&N);
    int X[N];
    
    scanf("%i",&X[0]);
    menor = X[0];
    posicao = 0;

    for(i = 1; i < N; i++){
        scanf("%i",&X[i]);
        if(X[i]<menor){
            menor = X[i];
            posicao = i;
        }
    }

    printf("Menor valor: %i\n", menor);
    printf("Posicao: %i\n", posicao);
    

    return 0;
}