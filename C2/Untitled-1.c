#include <stdio.h>

void main(){
    int fatorial(int x);
    int numero, resultado;

    printf("\ndigite um numero inteiro: ");
    scanf("%i",&numero);

    resultado = fatorial(numero);

    printf("o fatorial e %i\n",resultado);

    system("pause");
}
int fatorial(int x){
    int resultado;

    if(x==0){
        resultado=1;
    }else{
        resultado= x*fatorial(x-1);
    }
    return resultado;
}