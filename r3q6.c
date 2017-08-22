#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float Porcento(float votos,float t){
    float x;
    x=(votos/t)*100;
    return x;
}

int Ranking(int *participantes,int t){
    int contad;

    for(contad=1;contad<24;contad++){
        if(participantes[contad]!=0){
            printf("%d\t%d\t    %.1f%%\n",contad,participantes[contad],Porcento(participantes[contad],t));
            }
        }
    }

int Melhor(int *participantes){
    int m=0;
    int contad;
    for(contad=1;contad<24;contad++){
        if(participantes[contad]>m){
            m=participantes[contad];
        }
    }
    for(contad=1;contad<24;contad++){
        if(participantes[contad]==m){
            return contad;
        }
    }
}

int main()
{
    int i;
    int t=0;
    int contad;
    int participantes[24];


    for(i=0;i<24;i++){
        participantes[i]=0;
        }

    while(i!=0){

        printf("Numero do jogador ou 0 para encerrar:");

        scanf("%d",&i);
        if(i>23){
            printf("numero de jogador invalido\n");
        }else{
        t++;
        participantes[i]++;
        }}
        t--;


        printf("\nResultado da votacao:\n");
        printf("\nForam computados %d votos\n",t);

        printf("Jogador\tVotos\t    %%\n");
        Ranking(participantes,t);

        contad=Melhor(participantes);

        printf("O melhor foi o numero %d, com %d votos, correspondendo a %.f%% do total de votos", contad ,participantes[contad], Porcento(participantes[contad],t));

    return 0;
}
