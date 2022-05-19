#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main(){

//criar objeto de arquivo
ofstream arquivodesaida;

//abre arquivo ou cria caso nao exista
arquivodesaida.open("Texto.txt",std::ios_base::app);

//escreve algo
arquivodesaida<<"Pindamoiangaba";

//fecha o arquivo
arquivodesaida.close();

}
