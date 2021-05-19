#include <stdio.h>

void preencherVet(int* vetor, int elementos){
    for(int i=0; i<elementos; i++){
        printf("Valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void multiplicacao(int* vetor1, int* vetor2, int* vetor3){
    for(int i=0; i<10; i++){
        vetor3[i] = (vetor1[i]) * (vetor2[i]);
    }
}
void leitura(int* resultante, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Posicao %d: %d\n", i, resultante[i]);
    }
}


int main(){
    int vetor1[10], vetor2[10], vetor3[10];
    printf("\nPreencha o vetor 1:\n");
    preencherVet(vetor1, 10);
    printf("\nPreencha o vetor 2:\n");
    preencherVet(vetor2, 10);

    printf("\n");

    
    multiplicacao(vetor1, vetor2, vetor3);

    printf("Vetor resultante: \n");
    leitura(vetor3, 10);



    return 0;
}