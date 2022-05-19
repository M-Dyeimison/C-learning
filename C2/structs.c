#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    struct aluno{
        char nome[100];
        int idade;
    };

    //struct aluno pedro;

    /*struct aluno2{
        char nome[100];
        int idade;
    }pedro2;*/

    typedef struct _aluno {
        char nome[100];
        int idade;
    }Aluno;//apelido da struct aluno

    //struct Aluno barney;
    Aluno ted;

    ted.idade = 29;
    printf("idade = %i\n", ted.idade);

    Aluno *ped = (Aluno*)calloc(1,sizeof(Aluno));
    ped->idade = 46;
    strcpy(ped->nome,"Pedro");

    printf("idade = %i nome = %s\n", ped->idade, ped->nome);

    return 0;
}