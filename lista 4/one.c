/* 1.  Faça  um  algoritmo  para  imprimir  os  números  de  1  a  10  utilizando  uma  estrutura  ENQUANTO  e  um contador. */

#include <stdio.h>

int main(){                                 //Inicio do programa
    int numero = 1;
    
    while(numero <= 10){                    //Laco de repeticao
        printf("%d\n", numero);
        numero++;
    }

    return 0;                               //Final do Programa
}