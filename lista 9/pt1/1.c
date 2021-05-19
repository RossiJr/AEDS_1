#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void inverterString(char* frase, char* final, int tamanho){
    int j=tamanho-1;
    for(int i=0; i<tamanho; i++, --j){
        final[i] = frase[j];
        
    }
}

void criptografia(char* frase, int tamanho){
    char* final = (char *)calloc(tamanho, sizeof(char));

    for(int i=0; i<tamanho; i++){
        tolower(frase[i]);
        if(frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u'){
            frase[i] = '#';
        }

        inverterString(frase, final, tamanho);
    }
    
    printf("O resultado da frase e: %s", final);
    
}


int main(){
    printf("Insira uma frase de ate 100 caracteres: ");
    char frase[100];
    fgets(frase, sizeof(frase), stdin);

    int tamanhoFrase = strlen(frase);

    criptografia(frase, tamanhoFrase);





    return 0;
}