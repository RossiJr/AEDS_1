/* Calcular e retornar o máximo divisor comum entre dois números informados pelo usuário a partir do algoritmo de Euclides. */

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
}