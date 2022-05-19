#include <stdio.h>

int main(){

    int N,i, menor = 0, posicao;
    scanf("%i",&N);
    if(N <=1 || N >= 1000){
        return 0;
    }
    int X[N];
    
    for(i = 0; i < N; i++){
        fscanf(stdin, "%i", &X[i]);
    }

    menor = X[0];

    for(i = 0; i < N; i++){
        if(X[i]<menor){
            menor = X[i];
            posicao = i;
        }
    }

    printf("Menor valor: %i\n", menor);
    printf("Posicao: %i\n", posicao);
    

    return 0;
}