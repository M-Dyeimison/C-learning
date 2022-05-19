#include <stdio.h>
#include <stdlib.h>

void main(){
int x = 100;
int y = 200;
int z = 300;
for(x=100; x>=0; x--){
    printf("X: %d\n", x);
}

do{
    printf("Y: %d\n", y);
    y=y-1;
}while(y>=0);

while(z>=0){
    printf("Z: %d\n", z);
    z=z-1;
}
system("stop");
}
