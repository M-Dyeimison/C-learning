#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new>
using namespace std;
#define tam 10

int busca_simples(int vetor[tam],int valorp,int *pfound);

int main(){

int vetor[tam] = {10,12,45,78,79,36,52,13,46,85};
int valorp,cont;
int pfound;
bool vfound;

for(cont=0;cont<tam;cont++){
    cout<<vetor[cont]<<"-";
}

cout<<"Qual valor deseja encontrar? ";
cin>>valorp;

if(busca_simples(vetor,valorp, &pfound)== 1){
    cout<<"o valor foi encontrado, na posicao: "<<pfound;
}else{
    cout<<"o valor nao foi encontrado";
}

return 0;
}

int busca_simples(int vetor[tam],int valorp,int *pfound){

bool vfound;
int cont;

for(cont=0;cont<tam;cont++){
    if(vetor[cont] == valorp){
        vfound = true;
        *pfound = cont;
    }
}

if(vfound){
    //cout<<" O valor foi encontrado na posicao: "<<pfound;
    return 1;
}else{
    //cout<<"Valor nao encontrado";
    return -1;
}
}
