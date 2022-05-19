#include <stdio.h>

int main(){

    int x,i=0,z=0;

    printf("\nDigite um numero: ");
    scanf("%i",&x);

    for(i=2;i<x/2;i++){
        if(x%i == 0){
            z++;
        }
    }

    if(z>0){
        printf("\nNao Primo");
    }else{
        printf("\nPrimo");
    }

    return 0;
}