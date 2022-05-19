#include <stdio.h>
void main(){

int v[5],i;
float nf=0;

for(i = 0; i < 5; i++){
    printf("\nNota%i = ",i+1);
    scanf("%i",&v[i]);
    nf = v[i]+nf;
    if(v[i] > 10 || v[i] < 0){
        i = 10;
        printf("\nNota invalida");
    }
}
if(i == 10){
        printf("\n------------------------------------");
    }else{
    nf = nf/(i);
    printf("\nMedia = %.2f\n",nf);
}

system("pause");
}
