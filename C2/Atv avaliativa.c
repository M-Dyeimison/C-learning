#include <stdio.h>

void main(){

int sacas=0,produtor=0,sacasf=0,maior=0;
int sacasff=0,sacasaf=0,sacasmf=0,nsacas=0,maiorentrega=0,orgaf=0,orgmf=0,orgff=0;
float org=0,produtorm=0;

printf("\n-----------------------------------------\n");

printf("\nNumero de sacas: ");
scanf("%i",&sacas);


while(sacas!=-1){

    int nsacas2=0,orgm=0,orga=0,orgf=0;
    int sacasm=0,sacasa=0,sacsf=0;

    sacasf+=sacas;
    produtor++;

    if(sacas>maiorentrega){
        maiorentrega=sacas;
    }

    if(sacas>15){
        maior++;
    }

    printf("\nProdutor n%i\n",produtor);

    printf("\nNumero de sacas de arroz: ");
    scanf("%i",&sacasa);
    printf("\nSacas organicas: ");
    scanf("%i",&orga);


    printf("\nNumero de sacas de milho: ");
    scanf("%i",&sacasm);
    printf("\nSacas organicas: ");
    scanf("%i",&orgm);

    printf("\nNumeros de sacas de feijao: ");
    scanf("%i",&sacasf);
    printf("\nSacas organicas: ");
    scanf("%i",&orgf);

    printf("\n-----------------------------------------\n");

    printf("\nNumero de sacas: ");
    scanf("%i",&sacas);

    sacasmf+=sacasm;
    sacasaf+=sacasa;
    sacasff+=sacasf;

    orgaf+= orga;
    orgmf+= orgm;
    orgff+= orgf;
}

org=orgaf+orgff+orgmf;

nsacas=sacasmf+sacasaf+sacasff;
produtorm=nsacas/produtor;

printf("\nnsacas= %i",nsacas);
printf("\nnorg=%.2f\n",org);
org=org*(100.0/nsacas);
printf("\Porcentagem de sacas organicas recebidas: %.2f\n",org);
printf("\nNumero de sacas de arroz: %i",sacasaf);
printf("\nNumero de sacas de milho: %i",sacasmf);
printf("\nNumero de sacas de feijao: %i",sacasff);
printf("\nMaior entrega = %i",maiorentrega);
printf("\n%i produtores entregaram mais de 15 sacas de arroz",maior);
printf("\nMedia de sacas entregue por produtor= %.2f\n",produtorm);

system("pause");
}
