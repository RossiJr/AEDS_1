#include <stdio.h>

void preencherVet(int* vetor, int elementos){
    for(int i=0; i<elementos; i++){
        printf("Valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int maiorMenor(int* vetor, int tamanho, int* extremos){
    extremos[0] = vetor[0];
    extremos[1] = vetor[0];
    for(int i=0; i<tamanho; i++){
        if(vetor[i]>=extremos[0]){
        extremos[0]=vetor[i];
        extremos[2]=i;
        }

        if(vetor[i]<=extremos[1]){
        extremos[1]=vetor[i];
        extremos[3]=i;
        }
    }
    return *extremos;
}

int main(){
    int vetor[15], aux[4];
    preencherVet(vetor, 15);
    maiorMenor(vetor, 15, aux);

    printf("\n");

    printf("O maior valor e %d, e esta na posicao %d\n", aux[0], aux[2]);
    printf("O menor valor e %d, e esta na posicao %d\n", aux[1], aux[3]);



    return 0;
}