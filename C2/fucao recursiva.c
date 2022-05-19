#include <stdio.h>

void main(){

int fatorial(int x);
int numero, resultado;

printf("Digite um numero inteiro: ");
scanf("%i",&resultado);

resultado = fatorial(numero);

printf("O fatorial e %i\n", resultado);

system("pause");
}

int fatorial(int x){
    int resultado;

    if(x==0){
        resultado = 1;
    }else{
        resultado=x*fatorial(x-1);
    }
    return resultado;
}
