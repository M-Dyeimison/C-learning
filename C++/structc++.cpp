#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <new>
using namespace std;

struct st_goy{
string cor;
string name;
};

int main(){
//crindo ponteiro para struct
st_goy *goy = new st_goy;

//modificar valores
goy-> cor = "Amarelo";
goy-> name = "Banana";

//exibir valores
cout<<"Fruta: "<<goy->name<<" Cor: "<<goy->cor<<"\n";

//lista
st_goy *pgoy = new st_goy[2];

//modificar valores
pgoy[0].cor="Laranja";
pgoy[0].name="Laranja";
pgoy[1].cor="Azul";
pgoy[1].name="Mirtilo";

//exibir e percorrer
int i;
for(i=0;i<2;i++){
    cout<<"\nFruta: "<<pgoy[i].name;
    cout<<"\nCor: "<<pgoy[i].cor<<"\n";
}
system ("pause");
return 0;
}
