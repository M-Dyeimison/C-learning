#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

void a(int b, int c);
int bet(int b,int c);

int main(){
int b,c;
cout<<"Digite os valores: \n";
cin>>b>>c;
a(b,c);
cout<<"Subtracao de "<<b<<" - "<<c<<": ";
cout<<bet(b,c)<<"\n";

system("pause");
return 0;
}

void a(int b, int c){
printf("A soma de %d + %d resuta em: %d\n", b,c,b+c);
}

int bet(int b, int c){
return b-c;
}
