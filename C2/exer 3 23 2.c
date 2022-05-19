#include <stdio.h>

void main(){
char x;
int n,i=1,n1;

printf("---------------------------------------------------------\n\n");
scanf("%i",&n);

while(i>0){
    scanf("%c",&x);
    n1 += n;
    if(x == '+'){
    scanf("%i",&n);
}else if(x == '='){
    printf("%i",n1);
}
}

system("pause");
}
