#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
 int x[2][2],y,z;

 x[0][0]=1;
 x[0][1]=2;
 x[1][0]=3;
 x[1][1]=4;

 for(y=0;y<2;y++){
    for(z=0;z<2;z++){
        cout<<x[y][z]<<" ";
    }
    cout<<"\n";
 }

 printf("Digite os valores: \n");
 for(y=0;y<2;y++){
    for(z=0;z<2;z++){
        scanf("%d", &x[y][z]);
    }
 }

 for(y=0;y<2;y++){
    for(z=0;z<2;z++){
        cin>>x[y][z];
    }
 }
}
