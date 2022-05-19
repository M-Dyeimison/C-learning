#include <stdio.h>
#include <stdlib.h>

void main() {
    int y, x, z = 0;
    printf("Digite um valor para saber se ele e primo:");
    scanf("%d", &x);
    for(y = 1; y <= x ; y++){
        if(x % y == 0){
            z++;
        }
     }
     if(z == 2){
        printf("O numero e primo!");
    }else{
        printf("O numero nao e primo! Pois ele tem %d divisores", z);
    }
}
