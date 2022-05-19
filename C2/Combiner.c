#include <stdio.h>

int main(){

    char linha1[100], linha2[100], caractere;
    int i, N, j=0, k=0;
    int m, n, cont = 0;

    scanf("%i",&N);
    getchar();

    for(i=0;i<N;i++){
        j = 0;
        k = 0;
        cont = 0;

        do{
            caractere = getchar();
            linha1[j] = caractere;
            j++;
        }while(caractere != ' ');

        do{
            caractere = getchar();
            linha2[k] = caractere;
            k++;
        }while(caractere != '\n');

        linha1[j-1] = '\0';
        linha2[k-1] = '\0';

        //printf("%s\n",linha1);
        //printf("%s\n",linha2);

        if(k>j){

            for(m=0;m<j-1;m++){
                printf("%c",linha1[m]);
                for(n=0;n<1;n++){
                    printf("%c",linha2[cont]);
                    cont++;
                }
            }

            for(m=j-1;m<k-1;m++){
                printf("%c",linha2[m]);
            }

        }else if(k<j){

            for(m=0;m<k-1;m++){
                printf("%c",linha1[m]);
                for(n=0;n<1;n++){
                    printf("%c",linha2[cont]);
                    cont++;
                }
            }

            for(m=k-1;m<j-1;m++){
                printf("%c",linha1[m]);
            }

        }else{

            for(m=0;m<j-1;m++){
                printf("%c",linha1[m]);
                for(n=0;n<1;n++){
                    printf("%c",linha2[cont]);
                    cont++;
                }
            }

        }
        printf("\n");
    }

    return 0;
}