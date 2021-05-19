/* 8. Faça um algoritmo que imprima os números ímpares existentes de entre 1(inclusive) e 9 (inclusive). */

#include <stdio.h>

int main(){                                             //Inicio
    for(int i=1;i<=9;i++){
        
        if((i%2)>0)                                     //Teste para ver se e impar
        printf("%d\n", i);
    }


return 0;                                               //Fim
}