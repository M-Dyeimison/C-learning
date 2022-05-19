#include <stdio.h>

void div(int n){
    int i,som=0;
    for(i=1;i<(n/2)+1;i++){
        if(n%i==0){
            som+=i;
        }
    }
    printf("Soma dos divisores de %i = %i\n",n,som);
}

void verify(int vet[],int n){

    int i,n2;
    for(i=0;i<n;i++){
        if(vet[i]>0){
            printf("%i eh positivo\n",vet[i]);
        }else{
            printf("%i eh negativo\n",vet[i]);
            vet[i] = vet[i]*-1;
        }
        n2 = vet[i];
        div(n2);
    }

}

int main(){

    int n,i;

    printf("N = ");
    scanf("%i",&n);

    printf("\n");

    int vet[n];

    for(i=0;i<n;i++){
        printf("Valor%i: ",i+1);
        scanf("%i",&vet[i]);
        printf("\n");
    }

    verify(vet,n);


    return 0;
}