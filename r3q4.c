#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tAluno{
    char nome[31];
    char endereco[51];
    char matricula[11];
    char curso[31];
};
struct tAluno gAluno[101];

unsigned int consultaAlunosPorCurso(char *curso){
    int i;
    for(i=0;i<101;i++){
        //if('')
    }
}
int main(){
    int i,aux;
    char qcurso;
    printf("Quantos alunos deseja cadastrar? \n");
    scanf("%d", &aux);
    for(i=0;i<aux; i++){
        printf("Nome: \n");
        scanf("%s", &gAluno[i].nome);
        printf("Endereco: \n");
        scanf("%s", &gAluno[i].endereco);
        printf("Matricula: \n");
        scanf("%s", &gAluno[i].matricula);
        printf("Curso: \n");
        scanf("%s", &gAluno[i].curso);
    }
    printf("Qual o curso deseja saber o numero de alunos cadastrados? \n");
    gets(qcurso);

    consultaAlunosPorCurso(qcurso);
return 0;
}
