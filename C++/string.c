#include <stdio.h>
#include <stdlib.h>

void main(){
char x[255];
//instrucao
printf("Digite uma palavra: ");
//limpar o buffer
setbuf(stdin, 0);
//leitura da string
fgets(x,255,stdin);
//limpa casas não utilizadas
x[strlen(x)-1]= '\0';
//impressao
printf("%s\n", x);

system ("pause");
}
