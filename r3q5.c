#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char perfil[20];
    char estilo[20];
    int integrantes;
    int posicao;

}BANDA;

int Preencher(BANDA *Group){
    int i;

    strcpy(Group[0].perfil,"EXO");
     strcpy(Group[0].estilo,"KPOP");
      Group[0].integrantes=6;
       Group[0].posicao=2;

    strcpy(Group[1].perfil,"Twice");
     strcpy(Group[1].estilo,"Kgirl");
      Group[1].integrantes=9;
       Group[1].posicao=5;

    strcpy(Group[2].perfil,"BTS");
     strcpy(Group[2].estilo,"KPOP");
      Group[2].integrantes=7;
       Group[2].posicao=4;

    strcpy(Group[3].perfil,"Red Velvet");
     strcpy(Group[3].estilo,"Kgirl");
      Group[3].integrantes=5;
       Group[3].posicao=1;

    strcpy(Group[4].perfil,"Dreamcatcher");
     strcpy(Group[4].estilo,"KROCK");
      Group[4].integrantes=7;
       Group[4].posicao=3;


}

int Ranking(BANDA *Group){
    int i;
    int x;
    printf("qual colocacao do ranking deseja?\n");
    scanf("%d",&x);
     fflush(stdin);


    for(i=0;Group[i].posicao!=x;i++){}

    printf("%s\n",Group[i].perfil);

}

int EstiloM(BANDA *Group){
    int i;
    char Estilo[10];

    printf("qual Estilo musical?\n");
        gets(Estilo);
        fflush(stdin);

     for(i=0;i<5;i++){
      if(strcmp(Estilo,Group[i].estilo)==0){
         printf("%s\n",Group[i].perfil);
      }
     }
}

int perfilDa(BANDA *Group){
    int i=0;
    char perfil[20];

    printf("qual o perfil da banda?\n");
        gets(perfil);

     for(i=0;i<5;i++){
      if(strcmp(perfil,Group[i].perfil)==0){
         printf("%s está no ranking",Group[i].perfil);
          printf(" na posicaoao %d\n",Group[i].posicao);

      }
     }
}

int main()
{

    BANDA Group[5];

    Preencher(Group);

    Ranking(Group);

    EstiloM(Group);

    perfilDa(Group);

    return 0;
}
