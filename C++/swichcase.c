#include <stdio.h>
#include <stdlib.h>

void main(){
int x;
printf("Insira os valores: \n");
scanf("%d", &x);
switch(x){
    case 1:
    printf("Opcao 1 \n");
    break;

    case 2:
    printf("Opcao 2 \n");
    break;

    case 3:
    printf("Opcao 3 \n");
    break;

    case 4:
    printf("Opcao 4 \n");
    break;

    case 5:
    printf("Opcao 5 \n");
    break;

    case 0:
    printf("Opcao 0 \n");
    break;

    default:
    printf("nada \n");
    break;
}
system("pause");
}
