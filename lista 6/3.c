/* Elabore uma sub-rotina que calcule o máximo divisor comum (MDC) de dois números recebidos como
parâmetros. */

#include <stdio.h>

int mdcEu(int a, int b){
    int aux;
    if(a > b){
        do{
            aux = a%b;
            a = b;
            b = aux;
        }while(b!=0);

    return a;
    }
    else{
        do{
            aux = b%a;
            b = a;
            a = aux;
        }while(a!=0);
    
    return b;
    }
}

int main(){
    printf("Insira dois numeros: ");
    int a, b, resultado; scanf("%d %d", &a, &b);
    printf("\nO MDC e: %d", mdcEu(a, b));

    return 0;
}