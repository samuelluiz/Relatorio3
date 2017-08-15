#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    char nome[51];

    printf("Digite a palavra: \n");
    gets(nome);

    for(i=0;nome[i]!= '\0';i++){
    }
    j = i-1;
    for(i=0;;i++,j--){
                    if(nome[i]=='\0'){
            printf("Eh palindromo. \n");
            return 0;
        }
        if(nome[i] == nome[j]){
            continue;
        }else{
        break;
        }
    }
    printf("Nao eh palindromo. \n");
    return 0;
}
