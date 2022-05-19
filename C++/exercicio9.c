#include <stdio.h>
#include <stdlib.h>

void main(){
int z,y;
float x,k;
printf("Insira o numeros de algarismos a serem inseridos: ");
scanf("%d",&z);
float w[z];
for(y=0;y<z;y++){
    printf("Digite o %d valor: \n", y+1);
    scanf("%f",&w[y]);
    x= x+w[y];
}
printf("Y: %d\n", y);
k=x/y;
printf("A media dos algarismo e: %.2f\n", k);
/*for(y=0;y<z;y++){
    printf("%d valor: %d\n",y+1,w[y]);
}*/
system("pause");
}
