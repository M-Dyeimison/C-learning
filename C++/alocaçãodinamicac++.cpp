#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>
using namespace std;

int main(){
int tam,cont,*a;
a = &tam;

//criacao de ponteiro que recebe o novo vetor vazio
int *vetor = new int(tam);

cout<<"Digite o tamanho: ";
cin>> *a;
cout<<"\nDigite os valores: \n";

for(cont=0;cont<tam;cont++){
    cin>>vetor[cont];
}

for(cont=0;cont<tam;cont++){
    cout<<"Valor "<<cont+1<<": "<<vetor[cont]<<"\n";
}
free(vetor);
system ("pause");
return 0;
}
