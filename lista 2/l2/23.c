#include <stdio.h>

int main () {
    printf("Insira o codigo do produto: ");
    int codigo; scanf("%d", &codigo);
    printf("Agora insira a quantidade que deseja comprar: ");
    int qtd; scanf("%d", &qtd);
    double precoFinal = 0;

    if (codigo >= 1 && codigo <= 10){
        precoFinal = qtd * 10;
    }
    else if(codigo>=11 && codigo<=20){
        precoFinal = qtd * 15;
    }
    else if(codigo>=21 && codigo<=30){
        precoFinal = qtd * 20;
    }
    else if(codigo>=31 && codigo<=40){
        precoFinal = qtd * 40;
    }
    else {
        printf("Codigo invalido\n");
    }

    if (precoFinal <= 250){
        precoFinal -= precoFinal * 0.05;
    }
    else if (precoFinal>250 && precoFinal<=500){
        precoFinal -= precoFinal * 0.1;
    }
    else{
        precoFinal -= precoFinal * 0.15;
    }

if (precoFinal > 0){
    printf("O valor a pagar e: R$%.2lf", precoFinal);
    }
    return 0;
}