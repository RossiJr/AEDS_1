/* 1- Calcular e retornar o enésimo termo de uma progressão aritmética onde o primeiro termo e a razão são informados pelo usuário. */

#include <stdio.h>

float enesimo(float primeiro, float n, float razao){
    for(int i=0;i<n-1;i++){
        primeiro += razao;
    }
    
    return primeiro;
}

int main(){
    printf("Insira o primeiro termo: ");
    float primeiro, n, razao; scanf("%f", &primeiro);
    printf("Insira a razao: ");
    scanf("%f", &razao);
    printf("Agora insira qual termo deseja adquirir: ");
    scanf("%f", &n);
    
    printf("O valor do enesimo termo e: %.1f", enesimo(primeiro, n, razao));
    
    
    return 0;
}