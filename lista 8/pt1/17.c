#include <stdio.h>
#include <stdlib.h>

void preencherVet(int* vetor){
    for (int i=0; i<10; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void ordenamento(int* vetor, int tamanho){
    int *aux = (int *)calloc(tamanho, sizeof(int));
    aux[0] = vetor[0];                                                  //Clona o vetor

    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){                                   //Descobre os maiores numeros em ordem decrescente
            if(vetor[j]>=aux[i]){
            aux[i] = vetor[j];
            }
        }
        for(int j=0; j<tamanho; j++){                                   //Cada vez que um numero e identificado como maior, ele exclui do vetor
            if(aux[i]==vetor[j])
            vetor[j]=-9999999;
        }
        
    }

    for(int i=0; i<tamanho; i++){                                       //Substitui os novos valores do clone no vetor original
        vetor[i] = aux[i];
    }
}

void agrupamentoVetor(int* vetor1, int* vetor2, int* final){
    for(int i=0; i<10; i++){
        final[i]=vetor1[i];
        final[i+10]=vetor2[i];
    }
}

void leituraVetor(int* vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Posicao %d: %d\n", i, vetor[i]);
    }
}



int main(){
    int vetor1[10], vetor2[10], decrescente[20];

    printf("\nInsira o valor de cada posicao do vetor 1:\n");
    preencherVet(vetor1);

    printf("\nInsira o valor de cada posicao do vetor 2:\n");
    preencherVet(vetor2);

    agrupamentoVetor(vetor1, vetor2, decrescente);

    ordenamento(decrescente, 20);

    printf("\n");

    printf("O vetor final em ordem decrescente e:\n");
    leituraVetor(decrescente, 20);

    return 0;
}