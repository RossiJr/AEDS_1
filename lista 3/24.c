/* Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o
menor valor do conjunto. Considere que:
■ para encerrar a entrada de dados, deve ser digitado o valor zero;
■ para valores negativos, deve ser enviada uma mensagem;
■ os valores negativos ou iguais a zero não entrarão nos cálculos. */

#include <stdio.h>
int main(){
    printf("Insira valores naturais e positivos e, quando quiser parar, insira 0: ");
    int valor=1, maior=0, menor=99999;
    while (valor != 0){
        scanf("%d", &valor);
        if(valor>0){
            if(valor>maior){
                maior=valor;
            }
            if(valor<menor){
                menor=valor;
            }
        }
        else if(valor<0){
            printf("Valor iinvalido!\n");
        }
        else{

        }
    }
    printf("O maior e o menor numero sao, respectivamente: %d e %d", maior, menor);


    return 0;
}