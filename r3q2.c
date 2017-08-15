#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    char nome[20];

    printf("Digite seu nome: \n");
    gets(nome);

    for(i=0;nome[i]!= '\0';i++){
            for(j=0;j<=i;j++){
                printf("%c ", nome[j]);
            }
            printf("\n");
    }
return 0;
}
