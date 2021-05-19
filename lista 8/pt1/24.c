#include <stdio.h>
#include <stdlib.h>

void preencherVet(int* vetor, int elementos){
    for(int i=0; i<elementos; i++){
        printf("Valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}
int identificador(int* vetor){
    int contador=0, aux=0;
    for(int i=0; i<15; i++){
        aux=0;
        if(vetor[i]==1 || vetor[i]==2 || vetor[i]==3){
        contador++;
        }
        else{
            for(int j=1; j<vetor[i]; j++){
                if((vetor[i]%j)==0){
                    aux+=1;
                }
            }
            if(aux==1){
                contador++;
            }
        }
    }

    return contador;
}
void vetResult(int* vetorInicial, int* resultante){
    int posicao=0, aux=0;
    for(int i=0; i<15; i++){
        aux=0;
        if(vetorInicial[i]==1 || vetorInicial[i]==2 || vetorInicial[i]==3){
        resultante[posicao] = vetorInicial[i];
        posicao++;
        }
        else{
            for(int j=1; j<vetorInicial[i]; j++){
                if((vetorInicial[i]%j)==0){
                    aux+=1;
                }
            }
            if(aux==1){
                resultante[posicao] = vetorInicial[i];
                posicao++;
            }
        }
    }
}
void leitura(int* vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Posicao %d: %d\n", i, vetor[i]);
    }
}

int main(){
    int vetor1[15], aux;
    printf("Preencha o vetor:\n");
    preencherVet(vetor1, 15);

    aux = identificador(vetor1);
    int *resultante = (int *)calloc(aux, sizeof(int));
    vetResult(vetor1, resultante);

    printf("\nVetor resultante:\n");
    leitura(resultante, aux);


    return 0;
}