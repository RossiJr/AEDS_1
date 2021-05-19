/* Faça uma sub-rotina que receba como parâmetro um valor inteiro e positivo N, indicando a quantidade
de parcelas de uma soma S, calculada pela fórmula:
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n2 + 1)/(n + 3) */

#include <stdio.h>

    float repeticoes(int n){
        float numerador=2, denominador=4, divisao=0, razao=3, soma=0;
        for (int i=0; i<n; i++){
            divisao = numerador/denominador;
            soma +=divisao;
            numerador+=razao;
            denominador+=1;
            razao+=2;
        }
        return soma;
    }

int main(){
    printf("Insira o valor da quantidade de parcelas da soma: ");
    int n; scanf("%d", &n);
    printf("A soma dos %d termos nessa equacao e: %.2f", n, repeticoes(n));

    return 0;
}