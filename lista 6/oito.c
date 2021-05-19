/* Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial. */

#include <stdio.h>

int fatorial(int valor){
    int fat=valor;
    if(valor==0 || valor==1){                                       //fatorial de 0 e 1 é 1;
        fat=1;
    }
    for(int i=valor-1; i>1; i--){
        fat*=i;                                                     //O i equivale ao valor - 1 e a cada repeticao diminui 1 do valor;
    }
    return fat;
}

int main(){
printf("Insira o valor que deseja calcular o fatorial: ");
int valor; scanf("%d", &valor);
printf("O fatorial e: %d", fatorial(valor));
    return 0;
}