#include <stdio.h>
#include <stdlib.h>

int main(){

    void create(int n, double **a);

    int n = 5;
    double *a;

    create(n,&a);

    printf("&a = %p a = %p a* = %f\n", &a, a, *a);

    for(int i = 0;i<5;i++){
        a[i] = i+(float)i/4;
    }

    for(int i = 0;i<5;i++){
        printf("%i &a = %p a+%i = %p *(a+%i) = %.2f\n", i, &a, i, a+i, i, *(a+i));
    }

    free(a);
    a = NULL;

    return 0;
}

void create(int n, double **a){
    *a = (double*)calloc(n,sizeof(double));
}