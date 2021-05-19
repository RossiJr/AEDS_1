/* 9. Faça um algoritmo para ler um valor N (validar para aceitar apenas valores positivos) e imprimir os N primeiros números inteiros. */

#include <stdio.h>

int main(){                                         //inicio do programa

printf("Insira um valor positivo: ");
int numero; scanf("%d", &numero);

if(numero>=0){                                      //condicao para imprimir numeros positivos
    for(int i=1;i<=numero;i++){                     //n primeiros numeros
        printf("%d\n", i);
    }
}


    return 0;
}                                                   //Final do programa