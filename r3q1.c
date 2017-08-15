#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    char nome[20];

    printf("Digite seu nome: \n");
    gets(nome);

    for(i=0;nome[i]!= '\0';i++){
        printf("%c\n", nome[i]);
    }
return 0;
}
