#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

int send();

struct std_data{
int hold;
int day;
int month;
int year;
};

struct std_id{
struct std_data data;
string name;
};

int main(){
int i,x;

send();

cout<<"\nNumero de alunos: ";
cin>>x;

struct std_id id[x];

for(i=0;i<x;i++){
    cout<<"\nNome aluno "<<i+1<<": ";
    cin>>id[i].name;
    cout<<"Idade "<<i+1<<": ";
    cin>>id[i].data.hold;
    cout<<"DIA/MES/ANO "<<i+1<<":\n";
    cin>>id[i].data.day;
    cin>>id[i].data.month;
    cin>>id[i].data.year;
}

for(i=0;i<x;i++){
    cout<<"\nNome aluno "<<i+1<<": "<<id[i].name;
    cout<<"\nIdade "<<i+1<<": "<<id[i].data.hold;
    cout<<"\nDIA/MES/ANO "<<i+1<<":\n"<<id[i].data.day<<" "<<id[i].data.month<<" "<<id[i].data.year;
}

cout<<"\n\n";
send();

system ("pause");
return 0;
}

int send(){
cout<<"------------------------------------------\n";
}
