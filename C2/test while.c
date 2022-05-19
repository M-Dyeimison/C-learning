#include <stdio.h>
#include <string.h>

int main(){

    int a=0,i=0;

    while(i<5 && a!=-1){
                scanf("%i",&a);
                printf("\na = %i",a);
                i++;
    }

    return 0;
}