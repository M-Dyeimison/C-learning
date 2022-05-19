#include <stdio.h>
#include <stdlib.h>

void main(){
    int x,y,z;

    printf("Insira tres valores: \n");
    scanf("%d %d %d", &x, &y, &z);

    if(x>y && x>z){
        printf("O maior valor e x: %d \n", x);
    }else if(y>x && y>z){
        printf("O maior valor e y: %d \n", y);
    }else if(z>x && z>y){
        printf("O maior valor e x: %d \n", x);
    }else{
        printf("Todos os valores sao iguais \n");
    }



    system("pause");

}
