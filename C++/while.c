#include <stdio.h>
#include <stdlib.h>

void main(){

int x = 0;
int y = 0;
while(x<=10 && x>=3){
    printf("X = %d\n", x);
    x = x+2;
}

do{
    printf("X = %d\n", y);
    y = y+1;
}while(y<=10);

system("pause");
}
