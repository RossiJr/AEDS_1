/* 10. Faça um algoritmo que imprima a tabuada do 8 utilizando uma estrutura de repetição.*/

#include <stdio.h>

int main(){                                         //Inicio

    int numero;
    for(int i=0;i<=10;i++){                         //Execucao da tabuada do 8
        numero = 8 * i;
        printf("%d x 8 = %d\n", i, numero);
    }


return 0;                                           //Final
}