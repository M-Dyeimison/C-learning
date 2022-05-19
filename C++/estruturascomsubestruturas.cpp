#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

void sent();

struct std_data{
int day;
int month;
int year;
};

struct std_id{
struct std_data data;
string name;
int hold;
};

int main(){
int x,i,a,b,c,d;
sent();

cout<<"\nNumero de alunos: ";
cin>>x;

struct std_id id[x];

for(i=0;i<x;i++){
    cout<<"\nNome do "<<i+1<<" aluno: ";
    fflush(stdin);
    cin>>id[i].name;
    cout<<"\nIdade "<<i+1<<": ";
    cin>>id[i].hold;
    cout<<"\nDIA/MES/ANO "<<i+1<<" aluno: \n";
    cin>>id[i].data.day;
    cin>>id[i].data.month;
    cin>>id[i].data.year;
}
system("pause");
return 0;
}

void sent(){
cout<<"-----------------------------------";
}
