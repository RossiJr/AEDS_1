/* Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, minutos e se-
gundos, e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos. */

#include <stdio.h>

void conversao(int horas, int minutos, int segundos){
    int totalS=0;
    if(horas > 0){
        horas *= 3600;
    }
    if(minutos > 0){
        minutos *= 60;
    }
    totalS+=horas;
    totalS+=minutos;
    totalS+=segundos;
    printf("O valor total de segundos e: %d", totalS);
}

int main(){
printf("Insira os valores de horas, minutos e segundos, respectivamente: ");
int h, m, s; scanf("%d %d %d", &h, &m, &s);
conversao(h, m, s);

    return 0;
}