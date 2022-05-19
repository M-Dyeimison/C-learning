#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
#define tam 10

int busca_simples(int vetor[tam],int valorp,int *pfound);
int busca_binaria(int vetor[tam],int valorp,int *pfound);
void imprimir_vetor(int vetor[tam]);

int main(){

int vetor[tam] = {10,12,45,78,79,36,52,13,46};
int valorp,cont;
int pfound;
bool vfound;

imprimir_vetor(vetor);

cout<<"Qual valor deseja encontrar? ";
cin>>valorp;

if(busca_binaria(vetor,valorp,&pfound)== 1){
    cout<<"o valor foi encontrado, na posicao: "<<pfound;
}else{
    cout<<"o valor nao foi encontrado";
}

return 0;
}

void imprimir_vetor(int vetor[tam]){
int cont;
for(cont=0;cont<tam;cont++){
    cout<<vetor[cont]<<"-";
}
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

int busca_binaria(int vetor[tam],int valorp,int *pfound){

int esquerda = 0; //limite da esquerda
int direita = tam - 1; //limite da direita
int meio; //onde fica o cursor

while(esquerda <= direita){

meio = (esquerda+direita)/2;

if(valorp == vetor[meio]){
    *pfound = meio;
    return 1;
}

if(vetor[meio] < valorp){
    esquerda = meio + 1;
}else{
    direita = meio - 1;
}
}
return -1;
}
