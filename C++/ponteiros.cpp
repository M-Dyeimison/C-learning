#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){

int a, *pa;
cout<<"digite um valor: \n";
cin>>a;
pa = &a;
cout<<"mudar valor de "<<*pa<<" para: ";
cin>>*pa;
cout<<"'A' e igual a: "<<*pa<<"\n";

system("pause");
return 0;
}
