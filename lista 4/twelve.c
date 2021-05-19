/* 12. Ler 10 valores e escrever quantos destes valores são negativos. */

#include <stdio.h>

int main(){                                     //inicio
    printf("Insira 10 valores: ");
    float valor;
    int contador = 0;

    for(int i=0;i<10;i++){
        scanf("%f", &valor);                
        if(valor<0){                            //teste x<0
            contador++;
        }
    }
    printf("O numero de valores negaativos e: %d", contador);





return 0;                                       //fim
}