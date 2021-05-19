/* 2. Calcule a média e o desvio padrão de uma sequência de números como no exercício anterior, mas agoraconsidere que a quantidade de 
números n não é fornecida pelo usuário. Oprograma irá terminar quando ousuário digitar o número 0 (zero). */

#include <stdio.h>

int main(){
    int contador=0;
    float nmr=1, media=0;
    while (nmr!=0){
        printf("Insira um numero, caso deseje encerrar, insira 0: ");
        scanf("%f", &nmr);
        if(nmr!=0){
            contador++;
            media +=nmr;
        }
    }
    media /= contador;


    printf("A media e: %.2f", media);



    return 0;
}