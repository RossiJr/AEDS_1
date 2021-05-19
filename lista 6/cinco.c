/* Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo. */

#include <stdio.h>

void teste(int n){
    if(n==0){
        printf("O numero e 0");
    }
    else if(n>0){
        printf("O numero e positivo");
    }
    else{
        printf("O numero e negativo");
    }
}
int main(){
    printf("Insira um numero inteiro: ");
    int n; scanf("%d", &n);
    teste(n);
    return 0;
}