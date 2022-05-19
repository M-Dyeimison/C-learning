#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>
using namespace std;

int main(){
int line,col,**matriz,i,j;
cout<<"Digite o numero de linhas: ";
cin>> line;
cout<<"\nDigite o numero de colunas: ";
cin>> col;
cout<<"\n";

//alocando linhas
matriz = (int**)calloc(line,sizeof(int*));

//alocando colunas de cada linha
for(i=0;i<line;i++){
    matriz[i] = (int*)calloc(col,sizeof(int*));
}

for(i=0;i<line;i++){
    for(j=0;j<col;j++){
        cout<<"matriz["<<i<<"]["<<j<<"] : ";
        cin>>matriz[i][j];
    }
}

cout<<"\n--Matriz:. \n\n";
for(i=0;i<line;i++){
    for(j=0;j<col;j++){
        cout<<matriz[i][j]<<" ";
    }
    cout<<"\n";
}
cout<<"\n";
free(matriz);
system ("pause");
return 0;
}
