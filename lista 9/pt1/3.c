#include <stdio.h>
#include <string.h>

void gerarNova(char* frase, char* novaFrase, int tamanho){
    int elemento=0, i;

    for(i=0; i<tamanho; i++){
        if(frase[i]==' '){}
        else{
            novaFrase[elemento] = frase[i];                                 //identifica no vetor elementos diferentes de ' ' e atribui a posicao indicada, logo apos aumenta 1 na variavel de posicao
            elemento++;
        }
    }

    novaFrase[elemento]='\0';

}

int main(){
    printf("Insira uma frase de ate 300 caracteres: ");
    char frase[300];
    fgets(frase, sizeof(frase), stdin);
    char novaFrase[300];

    int tamanho = strlen(frase);                                            //identifica o tamanho da frase

    gerarNova(frase, novaFrase, tamanho);

    printf("\n%s", novaFrase);

    return 0;
}