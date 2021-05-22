#include <stdio.h>
#include <string.h>

int repeticoes(char* frase, char* caractere, int tamanho){
    int contador=0;
    for(int i=0; i<tamanho; i++){                                                               //percorre a frase e contabiliza se o caractere aparece e quantas vezes ele aparece
        if((int)frase[i] == (int)caractere[0]){                                                 //com casting (int) para evitar erros de comparacao
            contador++;
        }
    }

    return contador;
}
void teste(char* frase, char* caractere, int tamanho){
    int rep = repeticoes(frase, caractere, tamanho);
    if(rep > 0){
        printf("\nEsse caractere aparece %d vezes na string", rep);
    }
    else{
        printf("\nEsse caractere NAO esta presente na string");
    }
}


int main(){
    char frase[200];
    char caractere[1];
    printf("Insira uma frase de ate 200 caracteres: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Agora, insira um caractere: ");
    scanf("%c", &caractere);

    int tamanho = strlen(frase);

    teste(frase, caractere, tamanho);


    return 0;
}