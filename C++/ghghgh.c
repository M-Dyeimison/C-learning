#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sent();

struct std_data{
int day;
int month;
int year;
};

struct std_id{
struct std_data data;
char name[40];
int hold;
};

void main(){
int x,*xp=&x,i;
struct std_id id[x];

sent();

printf("\nNumero de alunos: ");
scanf("%d",x);
x=xp;

for(i=0;i<x;i++){
    printf("\nNome do %d aluno: ", i+1);
    fflush(stdin);
    gets(id[i].name);
    printf("\nIdade %d: ", i+1);
    scanf("%d",&id[i].hold);
    printf("\nDIA/MES/ANO %d aluno: ",i+1);
    scanf("%d",&id[i].data.day);
    scanf("%d",&id[i].data.month);
    scanf("%d",&id[i].data.year);
}
system("pause");
}

void sent(){
printf("-----------------------------------");
}
