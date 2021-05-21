#include <stdio.h>
#include <string.h>


void separar(char* frase, int tamanho){
    for (int i = 0; i < tamanho; i++){
        if(frase[i]!=' '){                                                                  // percorre a string testando para caracter diferente de ' '
        printf("%c", frase[i]);                                                             //quando verdadeiro, imprime o caracter testado, quando falso, quebra a linha
        }
        else{
            printf("\n");
        }
    }
}

int main(void) {
    char frase[200];
    printf("Insira uma frase de ate 200 caracteres: ");
    fgets(frase, sizeof(frase), stdin);
    int tamanho = strlen(frase);                                                            //identifica o tamanho da string

    separar(frase, tamanho);

    return 0;
}