#include <stdio.h>


void main(){

void banana(void);

banana();
banana();
banana();

system("pause");
}

void banana(void){
int variavelLocalAutomatica = 2;
variavelLocalAutomatica *= 2;

static int variavelLocalEstatica = 2;
variavelLocalEstatica *= 2;

printf("\nLocal Automatica = %i", variavelLocalAutomatica);
printf("\nLocal Estatica = %i", variavelLocalEstatica);
}
