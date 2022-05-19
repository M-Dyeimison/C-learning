#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void a(int *v,int x);
void b(int *vec, int numb);

int main(){
int x;
cout<<"Digite o numero de valores: ";
cin>>x;
int v[x];
cout<<"\nDigite os valores: \n";
a(v,x);
b(v,x);

free(v);

system("pause");
return 0;
}

void a(int *v,int x){
int i;
for(i=0;i<x;i++){
    cin>>v[i];
}
}

void b(int *vec, int numb){
int i,z=0;
cout<<"Valores: \n";
for(i=0;i<numb;i++){
    cout<<vec[i];
    cout<<" ";
    z++;
    if(z>=6){
        z=0;
        cout<<"\n ";
    }
}
}
