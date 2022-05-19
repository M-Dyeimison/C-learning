#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _alunos{
    char nome[100];
    int numero;
    float nota;
} aluno;

aluno* create_aluno(const char *nome, int numero, float nota){
    aluno* estudante = (aluno*)calloc(1,sizeof(aluno));
    strcpy(estudante->nome, nome);
    estudante->numero = numero;
    estudante->nota = nota;

    return estudante;
}

void print_aluno(const aluno* estudante){
    printf("%s\n", estudante->nome);
    printf("numero do aluno: %i\n", estudante->numero);
    printf("nota do aluno: %.2f\n", estudante->nota);
}

void destroy_aluno(aluno** ref_alun){
    aluno* ref = *ref_alun;
    free(ref);
    *ref_alun = NULL;
}

int main(){
    int n = 5, b = 1, c = 5;

    aluno** aluno1 = (aluno**)calloc(n, sizeof(aluno*));

    for(int i = 0; i < n; i++){

        aluno1[i] = create_aluno("marcos", b, c);
        print_aluno(aluno1[i]);
        destroy_aluno(&aluno1[i]);
        printf("destroyed: %i\n", aluno1[i] == NULL);

        b++;
        c++;

    }
    
    free(aluno1);
    
    return 0;
}