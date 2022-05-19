#include <stdio.h>

void main(){

int a;
printf("\na = ");
scanf("%i",&a);

switch (a){
    case 1:
        printf("\n1");
        break;
    case 2:
        printf("\n2");
        break;
    case 3:
        printf("\n3");
        break;
    case 4:
        printf("\n4");
        break;
    case 5:
        printf("\n5");
        break;
    default:
        printf("\nnao foi dessa vez");
        break;

}

system("pause");
}
