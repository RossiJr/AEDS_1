#include <stdio.h>

int main(){
    printf("Insira um numero inteiro: ");
    int numero, multiplicacao, i; scanf("%i", &numero);
printf("---x--x---\nTabuada\n----x--x----\n");
    
    for (i=0;i<11;i++){
    multiplicacao = 0;
    printf("%i x %i = ", numero, i);
    multiplicacao = numero * i;
    printf("%d\n", multiplicacao);
    }

    



    return 0;
}