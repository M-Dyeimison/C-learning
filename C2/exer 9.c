#include <stdio.h>

void main(){

float somadedigitos(float num1, float num2);
float a, b, soma;

printf("Digite 2 numeros: ");
scanf("%f",&a);
scanf("%f",&b);

soma = somadedigitos(a,b);

printf("A soma e %f\n", soma);

system("pause");
}

float somadedigitos(float num1, float num2){

    float valorabsoluto(float x);
    if(num1<0){
        num1 = valorabsoluto(num1);
    }
    if(num2<0){
        num2 = valorabsoluto(num2);
    }
return num1+num2;
}

float valorabsoluto(float x){
    return x*-1;
}
