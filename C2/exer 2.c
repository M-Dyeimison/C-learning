#include <stdio.h>

void main(){

int a,b;

printf("\na = ");
scanf("%i",&a);
printf("\nb = ");
scanf("%i",&b);

if(b == 0){
    printf("\nerror not found\n");
} else if(a % b == 0){
    printf("\nO primeiro valor e divisivel pelo segundo\n");
        } else {
            printf("\nNao e possivel realizar a operacao\n");
}

system("pause");
}
