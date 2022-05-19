#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int sp();

int main(){
int x,x1,x2,x3,x4,w=4,z[4],i;

sp();

cout<<"\n\nDigite o valor: ";
cin>>x;

z[0] = x/1000;
z[1] = x/100;
x1 = z[1];
z[2] = x/10;
x2 = z[2];

z[1] = z[1] - (z[0]*10);
z[2] = z[2] - (x1*10);
z[3] = x - (x2*10);

for(i=0;i<4;i++){
    cout<<"\n"<<z[i]<<"\n";
}
cout<<"\n";
system("pause");
sp();
return 0;
}

int sp(){
cout<<"----------------------------------------------";
return 0;
}
