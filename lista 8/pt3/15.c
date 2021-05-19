#include <stdio.h>


int pares(int* vetor, int tamanho){
    int contador=0;
    for(int i=0; i<tamanho; i++){
        if((vetor[i]%2)==0){
            contador++;
        }
    }
    return contador;
}
void preencherVetor(int* vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int main(){
    int vetor[15];
    preencherVetor(vetor, 15);

    printf("\nO vetor tem %d numeros pares.", pares(vetor, 15));

    return 0;
}