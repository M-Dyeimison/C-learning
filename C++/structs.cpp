#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

struct pal{
    int ordem;
    char let;
    char texto[255];
};

int main(){
//criar uma palavra
struct pal primeirapalavra;

//modificar os campos
primeirapalavra.ordem=0;
primeirapalavra.let='c';
strcpy(primeirapalavra.texto,"Batata");

//mostrar valores struct
cout<<"Ordem: "<<primeirapalavra.ordem;
cout<<"\nLetra: "<<primeirapalavra.let;
cout<<"\nString: "<<primeirapalavra.texto<<"\n";

//lista de vetores
struct pal listdepal[3];

//modificar os campos
listdepal[0].ordem=0;
listdepal[1].ordem=1;
listdepal[2].ordem=2;
listdepal[0].let='a';
listdepal[1].let='b';
listdepal[2].let='c';
strcpy(listdepal[0].texto,"Dahora");
strcpy(listdepal[1].texto,"Vrau");
strcpy(listdepal[2].texto,"Mama meu...");

//percorrer o  vetor
int cont;
for(cont=0;cont<3;cont++){
    cout<<"\nOrdem: "<<listdepal[cont].ordem;
    cout<<"\nLetra: "<<listdepal[cont].let;
    cout<<"\nString: "<<listdepal[cont].texto;
}
system("pause");
return 0;
}
