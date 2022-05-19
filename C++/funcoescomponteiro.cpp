#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int b(int numb);
void a(int *numb);

int main(){
int p = 50;
cout<<"P: "<<p<<"\n";
p = b(p);
cout<<"P(n): "<<p<<"\n";

a(&p);
cout<<"P(n2): "<<p<<"\n";

system("pause");
return 0;
}

int b(int numb){
return numb+10;
}

void a(int *numb){
*numb = *numb+10;
}
