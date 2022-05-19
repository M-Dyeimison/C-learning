#include <stdio.h>
#include <string.h>

int main(){

    char nomes[3][30][20];
    int t=0, a=0, b=0, numalunos[3], frequencia[3][30];
    int cnumaluno,cturma,consulta_aluno=1,consulta_turma=1,acima=0,notazero[30],zero=0,substitutiva;
    float notas[3][4][30],media=0,mediaporaluno[30],mediageral;

    printf("\nDigite x para parar de inserir alunos na turma\n");
    //leitura de todos os nomes e do numero de faltas do aluno
    for(t=0;t<3;t++){
        a = 0;
        printf("\n");
        while(a<30){
            printf("Turma %i | Aluno %i | Nome: ",t,a);
            scanf("%s", nomes[t][a]);

            if(strcmp(nomes[t][a], "x") == 0){
                break;
            }

            printf("Digite o numero de faltas do aluno: ");
            scanf("%i",&frequencia[t][a]);
            a++;
        }
        numalunos[t]=a;
    }
    //leitura de todas as notas
    for(t=0;t<3;t++){
        for(b=0;b<4;b++){
            for(a=0;a<numalunos[t];a++){
                printf("Turma %i | Bimestre %i | Aluno %i | Nota: ",t,b,a);
                scanf("%f",&notas[t][b][a]);
            }
        }
    }

    printf("\n---------Cosulta por aluno---------\n");

    do{
        printf("\nDigite o numero do aluno: ");
        scanf("%i",&cnumaluno);
        printf("\nDigite o numero da turma: ");
        scanf("%i",&cturma);

        printf("\nNome: %s",nomes[cturma][cnumaluno]);
    
        printf("\n");
        media = 0;
        //imprime a nota do aluno em cada bimestre
        for(b=0;b<4;b++){
            printf("Nota %i: %.2f ",b,notas[cturma][b][cnumaluno]);
            media+=notas[cturma][b][cnumaluno];
        }
        media = media/4;
        printf("\nMedia final: %.2f", media);
        printf("\nFrequencia: %i faltas",frequencia[cturma][cnumaluno]);
        //define a situacao do aluno
        if(frequencia[cturma][cnumaluno]>=10){
            printf("\nReprovado por falta");
        }else{
            if(media<5){
                printf("\nReprovado por nota");
            }else{
                if(media<7){
                    printf("\nFara substitutiva");
                }else{
                    printf("\nAprovado");
                }
            }
        }

        printf("\n\nDeseja realizar mais consultas por aluno? (1=Sim/0=Nao)");
        scanf("%i",&consulta_aluno);
    }while(consulta_aluno != 0);

    printf("\n---------Cosulta por turma---------\n");

    do{
        printf("\nDigite o numero da turma: ");
        scanf("%i",&cturma);

        printf("\nA turma %i tem %i alunos", cturma, numalunos[cturma]);

        //limpar array
        for(b=0;b<4;b++){
            for(a=0;a<numalunos[cturma];a++){
                mediaporaluno[a] = 0;
                notazero[cturma] = 0;
            }
        }

        for(b=0;b<4;b++){
            for(a=0;a<numalunos[cturma];a++){
                //soma as notas de cada aluno
                mediaporaluno[a] += notas[cturma][b][a];
                //define os alunos que obtiveram algum 0
                if(notas[cturma][b][a]==0){
                    notazero[a]=1;
                }
            }
        }

        zero=0;
        acima=0;
        substitutiva=0;
        mediageral=0;
        for(a=0;a<numalunos[cturma];a++){
            //calculo da media de cada aluno
            mediaporaluno[a] = mediaporaluno[a]/4;
            //soma da media de todos os alunos da turma
            mediageral += mediaporaluno[a];
            //verifica se a media e superior a 8
            if(mediaporaluno[a]>8){
                acima++;
            }
            //leitura do numero de alunos com notas 0
            if(notazero[a]==1){
                zero++;
            }

            //leitura do numero de alunos que farao a substitutiva
            if(frequencia[cturma][a]<10){
                if(mediaporaluno[a]<7){
                    if(mediaporaluno[a]>=5){
                    substitutiva++;
                    }
                }
            }
        }

        printf("\n%i alunos tiveram media acima de 8",acima);
        printf("\n%i alunos obtiveram alguma nota zero",zero);
        printf("\n%i alunos farao a prova substitutiva", substitutiva);
        printf("\nMedia de notas geral da turma = %.2f",mediageral/numalunos[cturma]);

        printf("\n\nDeseja realizar mais consultas por turma? (1=Sim/0=Nao)");
        scanf("%i",&consulta_turma);
    }while(consulta_turma!=0);

    return 0;
}