#include <stdio.h>
#include <stdlib.h>

void main(){

int a,b,c;
printf("Insira tres valores: \n");
scanf("%d %d %d",&a,&b,&c);
if(a>b || a>c){
        printf("a e maior que b ou c \n");
}else if(c>b || c>a){
        printf("c e maior que b ou a \n");
}else if(b>a || b>c){
        printf("b e maior que a ou c \n");
}

system("pause");
}
