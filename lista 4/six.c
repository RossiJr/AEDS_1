/* 6. Faça um algoritmo para ler um número inteiro e escrevê-lo na tela 10 vezes utilizando uma repetição. */

#include <stdio.h>

int main(){                                     //Inicio do programa
printf("Insira um numero inteiro: ");
int numero; scanf("%d", &numero);

for(int i=10;i>0;i--){                          //Laco de repeticao
    printf("%d\n", numero);
}

    return 0;                                   //final do programa
}