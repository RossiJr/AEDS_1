#include <stdio.h>

void preencherVet(int* vetor, int elementos){
    for(int i=0; i<elementos; i++){
        printf("Valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}
void copia(int* original, int* copiado, int tamanho){
    for(int i=0; i<tamanho; i++){
        copiado[i] = original[i];
    }
}
void substituicao(int* vetor1, int* vetor2){
    for(int i=0; i<10; i++){
        if(vetor1[i]==0)
        vetor2[i] = 1;
    }
}
void leitura(int* resultante, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Posicao %d: %d\n", i, resultante[i]);
    }
}

int main(){
    int vetor1[10], vetor2[10];
    preencherVet(vetor1, 10);
    copia(vetor1, vetor2, 10);
    substituicao(vetor1, vetor2);

    printf("\nVetor original: \n");
    leitura(vetor1, 10);

    printf("\nVetor atualizado: \n");
    leitura(vetor2, 10);

    return 0;
}