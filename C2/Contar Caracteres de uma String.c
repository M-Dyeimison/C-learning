#include <stdio.h>

int main(){

    int tamanhostring(char string[]);
    char stringusuario[20];

    printf("Digite uma palavra(string): \n");
    scanf("%s", stringusuario);

    int num = tamanhostring(stringusuario);

    printf("A string %s possui %i caracteres. \n", stringusuario, num);

    return 0;
}

int tamanhostring(char string[]){

    int numcaracteres = 0;

    while(string[numcaracteres] != '\0'){
        numcaracteres++;
    }
    return numcaracteres;
}
