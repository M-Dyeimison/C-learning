#include <stdio.h>

int main(){

    int i, j, min, n;

    do{
        scanf("%i",&n);

        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                min = i;
                if(j < min){
                    min = j;
                }
                if(n-i+1 < min){
                    min = n-i+1;
                }
                if(n-j+1 < min){
                    min = n-j+1;
                }
                printf("%3i",min);
                if(j<n){
                    printf(" ");
                }else{
                    printf("\n");
                }
            }
        }
        printf("\n");
    }while(n!=0);

    return 0;
}