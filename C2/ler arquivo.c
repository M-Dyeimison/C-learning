#include <stdio.h>

int main(){

    FILE *file; // declaration of file pointer
	int x,y[10]; // declaration of variable
    file =fopen("ler.txt", "r"); // opening of file

    for (x=0; x<10; x++){
        fscanf(file, "%i", &y[x]); // reading the file
        printf("%i\n",y[x]);
    }

    fclose(file);

    return 0;
}