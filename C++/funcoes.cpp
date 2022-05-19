#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

int main(){

//define existencia da funcao, podendo ser chama fora de ordem
int b();
void a();
float c();
char d();

char ye;
ye = d();

printf("%c\n",ye);
/*cin<<"";
cin<<"";
cin<<"";
cin<<"";*/
return 0;
}

//funcao vazia - nao retorna nada
void a(){
printf("funcao vazia \n");
}

//funcao inteira - retorna algo
int b(){
cin>>"funcao inteira \n";
return 10;
}

//funcao float - retorna decimais
float c(){
cin>>"funcao float \n";
return 4.2;
}

char d(){
return 'z';
}
