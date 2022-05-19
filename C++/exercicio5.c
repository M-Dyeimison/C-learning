#include <stdio.h>
#include <stdlib.h>

void main(){
int x;
float y,z;
printf("Pressione o botao da operacao desejada: \n");
scanf("%d", &x);

if(x>=5){
    printf("Error\n");
    return(0);
}

printf("Operacao requisitada: %d \n", x);
printf("Digite os valores:\n");
scanf("%f %f",&y,&z);


switch (x){
case 0:
    printf("Adicao: %.2f \n", y + z);
    break;
case 1:
    printf("Subtracao: %.2f \n", y - z);
    break;
case 2:
    printf("Multiplicacao: %.2f \n", y * z);
    break;
case 3:
    printf("Divisao: %.2f \n", y / z);
    break;
default:
    printf("Error 404");
}
system("pause");
}
