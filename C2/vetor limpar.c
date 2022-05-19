#include<stdio.h>

int main(){

    int int matriz[5][5][5];

    return 0;
}

#include<stdio.h>

int main(){

    int matriz[5][5][5],A,B,C;
    
    for(A=0;A<5;A++){
        for(B=0;B<5;B++){
            for(C=0;C<5;C++){
                matriz[A][B][C] = 5;
            }
        }
    }

    return 0;
}