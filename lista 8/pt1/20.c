#include <stdio.h>


void preencherVet(int* vetor, int elementos){
    for(int i=0; i<elementos; i++){
        printf("Valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}
void positivos(int* vetor){
    for(int i=0; i<10; i++){
        if(vetor[i]>=0){
            printf("Posicao %d, valor %d: Positivo\n", i, vetor[i]);
        }
    }
}


int main(){
    int vetor[10];
    preencherVet(vetor, 10);

    printf("\nNumeros positivos:\n");
    positivos(vetor);

    return 0;
}