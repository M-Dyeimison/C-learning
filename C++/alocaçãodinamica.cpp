#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int* alocvec(int tam);
void a(int *vec, int posi);
void b(int *vec, int posi);

int main(){
int *v,x;

cout<<"Digite o tamanho do vetor: ";
cin>>x;

//ponteiro recebe o tamanho que foi alocado para o vetor
v = alocvec(x);
a(v,x);
b(v,x);

system("pause");
return 0;
}

int* alocvec(int tam){

//memoria auxiliar
int *aux;

//alocacao dinamica de memoria
aux = (int*)calloc(tam,sizeof(int));

//retorno do ponteiro que aponta a posicao na memoria
return aux;
}

void a(int *vec, int posi){
    int i;
    for(i=0;i<posi;i++){
        cin>>vec[i];
    }
}

void b(int *vec, int posi){
int i;
for(i=0;i<posi;i++)
    cout<<vec[i]<<" ";
}
