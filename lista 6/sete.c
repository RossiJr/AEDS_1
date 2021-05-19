/* Elabore uma sub-rotina que leia um número não determinado de valores positivos e retorne a média aritmé-
tica desses valores. Terminar a entrada de dados com o valor zero.*/

#include <stdio.h>

float media(){
    float mediaA=0, valor;
    int contador=0;
    
    do{
        scanf("%f", &valor);
        if(valor <= 0){}
        else {
        mediaA+=valor;
        contador++;
        }
    } while(valor!=0);
    
    mediaA/=contador;

    return mediaA;
}


int main(){

int valor; float mediAr=0;
    printf("Insira um valor positivo, caso queira finalizar o programa, digite 0: ");

    printf("O valor da media e: %.2f", media());
    return 0;
}