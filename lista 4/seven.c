/* 7. Faça um algoritmo que imprima na tela os 10 primeiros números inteiros maiores que 100 utilizando um a estrutura de repetição. */

#include <stdio.h>

int main(){                                     //Inicio do programa

int numero = 100;
for(int i=1;i<=10;i++){                         //repete 10x e imprime o numero + o valor da repeticao        
numero = 100 + i;                                      
printf("%d\n", numero);
}
      
return 0;                                       //Final do programa
}