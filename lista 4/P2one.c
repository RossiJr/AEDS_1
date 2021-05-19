/* 1. Faça um algoritmo que receba um inteiro positivo e retorne sua representação no formato binário. */

#include <stdio.h>

int main(){
    printf("Insira um numero inteiro positivo: ");
    int nmr, aux; scanf("%d", &nmr);

    if (nmr == 0){
        printf("O");
    }
    else if (nmr == 1){
        printf("1");
    }


    return 0;
}