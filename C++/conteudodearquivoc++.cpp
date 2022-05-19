#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main(){
//arquivo a ser lido
ifstream input("Texto.txt");

//string que recebe o texto lido
string textolido;

//passa o texto do arquivo para a string
for(string line;getline(input,line);){
    textolido += line;
}

cout<<textolido;

return 0;
}
