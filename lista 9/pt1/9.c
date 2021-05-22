#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void teste(int posicao){
    if(posicao==-1){
        printf("\nO caractere NAO esta localizado na string.");
    }
    else{
        printf("\nEsta na posicao: %d", posicao);
    }
}
void primeiraOcorrencia(char* frase, int tamanho, char* caractere){
    int posicao = -1;
    for(int i=0; i<tamanho; i++){                                                           //varre a string procurando o caractare solicitado
        if((char)frase[i] == (char)caractere[0]){
            posicao = i;
            break;                                                                          //caso ache, nao executa mais o for para que nao retorne outra posicao que tenha a letra
        }
    }
    teste(posicao);
}


int main(){
    char frase[200];
    char caractere[1];
    printf("Insira uma frase de ate 200 caracteres: ");
    fgets(frase, sizeof(frase), stdin);
    printf("Agora, insira um caractere: ");
    scanf("%c", &caractere);

    int tamanho = strlen(frase);

    primeiraOcorrencia(frase, tamanho, caractere);

    return 0;
}