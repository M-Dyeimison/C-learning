#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

//declarando fun��es auxiliares
void space();

int main(){

space();

//declara��o de variaveis
float x;

//corpo do programa
cout<<"\n\n";
cout<<"Digite o valor: ";
cin>>x;
cout<<"\n"<<"Este e o valor: "<<x<<"\n\n";
space();

return 0;
}

void space(){
cout<<"---------------------------------------";
}
