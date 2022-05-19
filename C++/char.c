#include <stdio.h>
#include <stdlib.h>

void main(){
char v;
printf("insira um valor: \n");

//limpar entrada principal
fflush(stdin);

scanf("%c", &v);
printf("valor atual: %c",v);
}
