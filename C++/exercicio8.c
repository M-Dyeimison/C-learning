#include <stdio.h>
#include <stdlib.h>

void main(){
int x;
int c=0;
float z,y,w;
printf("Digite um valor: \n");
scanf("%d", &x);
y=x;
w=x;
for(w!=0;w>0;w--){
    z=y/w;
    int b = z;
    if(z-b == 0){
        printf("%.0f e divisivel por: %.0f \n",y,w);
        c = c+1;
    }
}
if(c>2){
    printf("%d nao e um numero primo\n", x);
}else{
    printf("%d e primo\n", x);
}
 system("pause");
}
