/* 6. Escreva outra versão do algoritmo para resolver o problema anterior utilizando a estrutura com teste de saída no início da 
repetição (ENQUANTO). */

#include <stdio.h>

int main(){                                         //inicio
float n;
printf("Numero: ");
scanf("%f", &n);
while(n!=0){                                        //teste do n diferente de 0
    if(n>0)                                         //teste p/ positivo
        printf("Positivo.\n--x-x--\n");
    else                                            //teste p/ negativo
        printf("Negativo.\n--x-x--\n");

    printf("Numero: ");
    scanf("%f", &n);
}
    return 0;                                       //fim
}