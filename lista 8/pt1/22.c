#include <stdio.h>
#include <stdlib.h>

void preencherVet(int* vetor, int elementos){
    for(int i=0; i<elementos; i++){
        printf("Valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}
int identificador(int* vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        if(vetor[i]<=0){
        tamanho--;
        }
    }
    return tamanho;
}
void substituicao(int* vetorOriginal, int* novoVetor){
    int j=0;
    for(int i=0; i<10; i++){
        if(vetorOriginal[i]>0){
            novoVetor[j]=vetorOriginal[i];
            j++;
        }
    }
}
void leitura(int* vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Posicao %d: %d\n", i, vetor[i]);
    }
}

int main(){
    int vetor1[10], tamanho=10;
    printf("Insira os valores correspondentes ao vetor original:\n");
    preencherVet(vetor1, 10);

    printf("\n");


    int contador = identificador(vetor1, 10);
    int *vetor2 = (int *)calloc(contador, sizeof(int));

    substituicao(vetor1, vetor2);

    printf("Valores do novo vetor:\n");
    leitura(vetor2, contador);
    
    return 0; 
}