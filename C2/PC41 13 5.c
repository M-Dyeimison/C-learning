#include <stdio.h>

int main(){

    int x,i=0,z=0;

    printf("\nDigite um numero: ");
    scanf("%i",&x);

    for(i=0;i<x;i++){
        printf("\ni");
        if((x%i == 0) && (i!=0) && (i!=1)){
        z++;
        printf("\n%i",z);
        }
    }

    if(z>0){
        printf("\nNao Primo");
    }else{
        printf("\nPrimo");
    }

    return 0;
}
