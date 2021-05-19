/* Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos núme-
ros inteiros existentes entre o número 1 e N (inclusive). */

#include <stdio.h>

void somaI(int n){
    int soma=0;
    for(int i=1;i<=n;i++){
        soma+=i;
    }
    printf("Soma: %d", soma);
}

int main(){
printf("Insira um numero: ");
int n; scanf("%d", &n);
somaI(n);                               //funcao para soma de todos numeros entre 1 e N

    return 0;
}