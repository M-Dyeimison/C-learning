#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main(){
//cria o objeto do arquivo
ofstream myfile;

//Abre o arquivo
myfile.open("Texto.txt");

//esvaziar arquivo
myfile << "";

myfile.close();

return 0;
}
