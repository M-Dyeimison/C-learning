#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro{
        char titulo[100];
        unsigned int num_paginas;
        float preco;
} Livro;


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

int main(){
    Livro** vet = (Livro**)calloc(3, sizeof(Livro*));
    vet[0] = create_livro("harry potter 1", 200, 25);
    vet[1] = create_livro("a batalha do apocalipse", 600, 40);
    vet[2] = create_livro("o senhor dos aneis", 500, 50);

    for(int i = 0; i < 3; i++){
        print_livro(vet[i]);
    }

    //destroy
    for(int i = 0; i < 3; i++){
        destroy_livro(&vet[i]);
    }
    free(vet);
    vet = NULL;

    Livro* book = create_livro("Harry Potter 1", 200, 25);

    destroy_livro(&book);

    return 0;
}