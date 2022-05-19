#include <stdio.h>

int main(){

    int x;
    x = 15;
    int *ponteiro;
    ponteiro = &x;

    printf("%i\n", *ponteiro);

    return 0;
}