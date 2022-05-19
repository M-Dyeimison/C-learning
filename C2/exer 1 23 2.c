#include <stdio.h>

void main(){

int i=1,x,b=0;
float mi = 0;

while(i > 0){
    b++;
    printf("\nInsira a %i idade: ", b);
    scanf("%i",&x);
    if(x>=18){
        printf("Maior de idade\n");
    }else{printf("Menor de idade\n");}
    printf("Foram processados %i dados\n", b);
}

system("pause");
}
