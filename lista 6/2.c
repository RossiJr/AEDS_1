/* Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e retorne Xz

sem utilizar

funções ou operadores de potência prontos. */

#include <stdio.h>

int elevar(int x, int z){
    int aux=x;
    for (int i=2; i<=z; i++){
        aux*=x;
    }

    return aux;
}

int main(){
    printf("Insira dois valores, a e b: ");
    int a, b; scanf("%d %d", &a, &b);

    printf("\nO valor de %d elevado a %d e: %d", a, b, elevar(a, b));

    return 0;
}