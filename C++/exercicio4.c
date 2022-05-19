#include <stdio.h>
#include <stdlib.h>

void main(){

float x,y,z;
printf("Insira as medidas dos lados: \n");
scanf("%f%f%f",&x,&y,&z);
if(x==y && y==z){
    printf("Triangulo equilatero\n");
}else if(x==y || x==z){
    printf("Triangulo isoceles \n");
}else{
    printf("Triangulo escaleno \n");
}
system("pause");

}
