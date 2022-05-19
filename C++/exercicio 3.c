#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void main(){
 float x,y,z,h;
 bool w = true;

 printf("Insira suas notas \n");
 scanf("%f %f %f",&x,&y,&z);
 h = (x+y+z)/3;
 printf("Media: %.2f \n", h);
 if(h >= 7){
     printf("Aprovado \n");
 }else{
     printf("Reprovado \n");
 }

 system("pause");
}
