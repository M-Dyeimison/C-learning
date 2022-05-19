#include <stdio.h>
#include <stdlib.h>

int main(){

    int*** matriz = NULL;
    int l = 0;

    matriz = (int***)calloc(10,sizeof(int**));

    for(int i = 0; i<10; i++){
        matriz[i] = (int**)calloc(10,sizeof(int*));
        for(int j = 0; j<10; j++){
            matriz[i][j] = (int*)calloc(10,sizeof(int));
        }
    }

    for(int k = 0; k<10; k++){
        for(int i = 0; i<10; i++){
            for(int j = 0; j<10; j++){
                matriz[k][i][j] = l++;
            }
        }
    }

    for(int k = 0; k<10; k++){
        for(int i = 0; i<10; i++){
            for(int j = 0; j<10; j++){
                printf("\tmatriz[%i][%i][%i] = %i &matriz = %p &matriz = %p\n", k,i,j, matriz[k][i][j], &matriz, &matriz[k][i][j]);
            }
        }
    }

    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            free(matriz[i][j]);
        }
        free(matriz[i]);
    }

    free(matriz);
    matriz = NULL;
    return 0;
}