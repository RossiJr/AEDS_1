/* 4-Calcular e retornar também a soma dos 𝑛primeiros termos desta progressão(veja ex. 3). */

#include <stdio.h>

float enesimo(float primeiro, float n, float razao){
    float soma=primeiro;
    for(int i=0;i<n-1;i++){
        primeiro *= razao;
        soma+=primeiro;
    }
    
    return soma;
}

int main(){
    printf("Insira o primeiro termo: ");
    float primeiro, n, razao; scanf("%f", &primeiro);
    printf("Insira a razao: ");
    scanf("%f", &razao);
    printf("Agora insira qual termo deseja adquirir: ");
    scanf("%f", &n);
    
    printf("O valor da soma do  enesimo termo e: %.1f", enesimo(primeiro, n, razao));
    
    
    return 0;
}