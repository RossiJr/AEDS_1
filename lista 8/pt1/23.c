#include <stdio.h>

void preencherVet(int* vetor, int elementos){
    for(int i=0; i<elementos; i++){
        printf("Valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}
void subtracao(int* vetor1, int* vetor2, int* vetorFinal){
    int aux=4;
    for(int i=0; i<5; i++){
        vetorFinal[i] = vetor1[i] - vetor2[aux];
        aux--;
    }
}
void leitura(int* vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Posicao %d: %d\n", i, vetor[i]);
    }
}

int main(){
    int vetor1[5], vetor2[5], vetorFinal[5];
    printf("\nPreencha o primeiro vetor:\n");
    preencherVet(vetor1, 5);
    printf("\nPreencha o segundo vetor:\n");
    preencherVet(vetor2, 5);

    subtracao(vetor1, vetor2, vetorFinal);
    printf("\n");

    printf("\nValores finais: \n");
    leitura(vetorFinal, 5);

    return 0;
}