#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
int y,z,a,b;
float x[2][2];
cout<<"Digite os valores: \n";
for(y=0;y<2;y++){
    for(z=0;z<2;z++){
        cin>>x[y][z];
    }
}
a =x[1][0];
b =x[1][1];


cout<<a<<" "<<b<<"\n";
cout<<x[0][0]<<" "<<x[0][1]<<"\n";
system("pause");
return 0;
}
