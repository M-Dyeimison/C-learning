#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

void a(int b);

int main(){
int b;
cout<<"Digite o codigo para candidato a skz: ";
cin>>b;
cout<<"Essa e sua identificacao de agente: \n";
a(b);
system("pause");
return 0;
}

void a(int b){
cout<<"Paopao "<<b<<"\n";
}
