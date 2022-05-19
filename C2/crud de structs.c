#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro{
    char titulo[100];
    unsigned int num_paginas;
    float preco;
} Livro;

typedef struct _aluno{
    char nome[100];
    int idade;
    Livro *livro_fav;
} Aluno;

//construtor para livros
Livro* create_livro(const char *titulo, unsigned int num_paginas, float preco){

    Livro* livro = (Livro*)calloc(1,sizeof(Livro));
    strcpy(livro->titulo, titulo);
    livro->preco = preco;
    livro->num_paginas = num_paginas;

    return livro;
}

void destroy_livro(Livro **livro_ref){

    Livro *livro = *livro_ref;
    free(livro);
    *livro_ref = NULL;

}

Livro* copy_livro(const Livro* livro){
    return create_livro(livro->titulo, livro->num_paginas, livro->preco);
}

void print_livro(const Livro *livro){
    printf("Titulo: %s\n", livro->titulo);
    printf("Num Paginas: %u\n", livro->num_paginas);
    printf("Preco: R$ %.2f\n", livro->preco);
}

Aluno *create_aluno(const char *nome, int idade, const Livro *livro_fav){
    Aluno *aluno = (Aluno*)calloc(1,sizeof(Aluno));
    strcpy(aluno->nome, nome);
    aluno->idade = idade;
    aluno->livro_fav = copy_livro(livro_fav);
}

void destroy_aluno(Aluno **aluno_ref){
    Aluno *aluno = *aluno_ref;

    destroy_livro(&aluno->livro_fav);
    free(aluno);
    *aluno_ref = NULL;
}

void print_aluno(const Aluno* aluno){
    printf("Nome: %s\n", aluno->nome);
    printf("Idade: %i\n", aluno->idade);
    puts("Livro favorito");
    puts("-------");
    print_livro(aluno->livro_fav);
}

int main(){

    Livro* book = create_livro("Harry Potter 1", 200, 25);
    print_livro(book);
    book->preco = 80;
    print_livro(book);

    Aluno *ted = create_aluno("Ted", 20, book);
    print_aluno(ted);

    destroy_livro(&book);

    print_aluno(ted);

    destroy_aluno(&ted);

    return 0;
}