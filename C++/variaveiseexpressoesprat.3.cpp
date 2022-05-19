#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
int y = 1,a,b,c,*x = &y;
float x1,x2;

cout<<"Insira os valores de A, B e C: \n";
cin>>a>>b>>c;

while(*x > 0){
    *x = ((b*b)-((4*a)*c));
    x1 = (!b + sqrt(*x))/(2*a);
    x2 = (!b - sqrt(*x))/(2*a);

    cout<<"Y = "<<*x<<"\n";
    cout<<"X1 = "<<x1<<", X2 = "<<x2<<"\n";
}

cout<<"Nao e uma funcao quadrada!";

return 0;
}
