#include <stdio.h>

int main(){

char linha[51];
int a,p=0,r=0,r2=0,r3=0,w=0,k;

while(scanf("%s",linha) != EOF){
    w=r=r2=r3=0;
    a = strnlen(linha,50);
    scanf("%i",&p);

    for(k=0;k<a;k++){
        if(linha[k] == 'R'){
            r++;
            if(r == p){
                r2++;
                r=0;
            }
        }else{
            w++;
            if(r>0){
                r3++;
            }
            r=0;
        }
    }
    if(r>0){
        r = 1;
    }
    printf("%i\n",r+r2+r3+w);
}

    return 0;
}