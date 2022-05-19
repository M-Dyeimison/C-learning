#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main(){
//cursor que percorre o arquivo
int c,x;

char conteudo[255];
int cont = 0;

//arquivo a ser lido
FILE *file;

//abre o arquivo do diretorio escolhido
file = fopen("Texto.txt","r");

//se o arquivo for encontrado
if(file){
    //enquanto encontra letras
    while((c = getc(file)) != EOF){
        printf("%c", c);

        conteudo[cont] = c;
        cont++;
    }
}
//fecha o arquivo
fclose(file);
x = cont;
for(cont=0;cont<x;cont++){
    printf("%c",conteudo[cont]);
}

for(cont=0;cont<strlen(conteudo);cont++){
    printf("%c",conteudo[cont]);
}

return 0;
}
