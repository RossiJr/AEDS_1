#include <stdio.h>
#include <string.h>

// Função recursiva para verificar se a palavra é palíndromo
int inverte(char *palavra, int tam, int posicao){

    if (posicao < tam / 2){
        if (palavra[posicao] == palavra[tam - posicao - 1]){
            return 1 * inverte(palavra, tam, posicao+1);
        }
        else{
            return 0;
        }
    }
    else{
        return 1;
    }
}

int palindromo(char *palavra) { 

    int aux1, x = 0;

    aux1 = inverte(palavra, strlen(palavra), x);

    if (aux1 == 1) printf("E palindromo");
    else printf("Nao e palindromo");

}

int main() {

    char palavra[30];
    printf("Insira a palavra para teste: ");
    scanf("%s", &palavra);
    palindromo(palavra);

    return 0;
}