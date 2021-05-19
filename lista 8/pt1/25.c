#include <stdio.h>

void preencherVet(int* vetor, int elementos){
    for(int i=0; i<elementos; i++){
        printf("Valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}
int maiorValor(int* vetor, int tamanho){
    int maior = vetor[0];
    for(int i=0; i<tamanho; i++){
        if(vetor[i]>=maior){
            maior = vetor[i];
        }
    }
    return maior;
}
void resultante(int* vetor, float* resultante, int tamanho, int valor){
    for(int i=0; i<tamanho; i++){
        resultante[i] = (float)vetor[i] / (float)valor;
    }
}
void leitura(float* vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Posicao %d: %.2f\n", i, vetor[i]);
    }
}


int main(){
    int vetor[15];
    float vetorResultante[15];
    printf("\nInsira os valores do vetor: \n");
    preencherVet(vetor, 15);
    
    int maior = maiorValor(vetor, 15);

    resultante(vetor, vetorResultante, 15, maior);

    printf("\nVetor resultante:\n");
    leitura(vetorResultante, 15);

    return 0;
}