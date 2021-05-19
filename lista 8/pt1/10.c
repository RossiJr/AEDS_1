#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void preencherVet(int* vetor, int elementos){
    for(int i=0; i<elementos; i++){
        printf("Valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int classPar(int* vetor){
    int contador=0;
    for(int i=0; i<10; i++){
        if((vetor[i]%2)==0)
        contador++;
    }

    return contador;
}
int classImpar(int* vetor){
    int contador=0;
    for(int i=0;i<10;i++){
        if((vetor[i]%2)>0){
            contador++;
        }
    }

    return contador;
}

void somaResultante(int* vetorInicial, int* vetorAux, int* resultante, int tamanhoInicial){
    int j=0;
    for(int i=0; i<tamanhoInicial; i++){
        if((vetorInicial[i]%2)==0){
            resultante[j]=vetorInicial[i];
            for(int c=0;c<5;c++){
                resultante[j]+=vetorAux[c];
            }
            j++;
        }
    }
}

void resultanteDivisor(int* vetor1, int* vetor2, int* resultante){
    int j=0, contadorDivisores=0;

    for(int i=0; i<10;i++){
        contadorDivisores=0;
        if((vetor1[i]%2)>0){
            for(int c=0; c<5; c++){
                if((vetor1[i]%vetor2[c])==0){
                    contadorDivisores++;
                }
            }
            resultante[j]=contadorDivisores;
            j++;
        }
    }
}

void leituraResultante(int* resultante, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Posicao %d: %d\n", i, resultante[i]);
    }
}

int main(){
    int vetor1[10], vetor2[5], aux, aux2;
    printf("Insira os valores do vetor 1:\n");
    preencherVet(vetor1, 10);
    printf("\n");
    printf("Insira os valores do vetor 2:\n");
    preencherVet(vetor2, 5);

    aux = classPar(vetor1);
    int *resultante1 = (int *)calloc(aux, sizeof(int));

    somaResultante(vetor1, vetor2, resultante1, 10);

    printf("\n");

    printf("O primeiro vetor resultante e: \n");
    leituraResultante(resultante1, aux);
    
    printf("Aperte qualquer tecla para continuar...");
    getch();

    aux2 = classImpar(vetor1);
    int *resultante2 = (int *)calloc(aux2, sizeof(int));

    resultanteDivisor(vetor1, vetor2, resultante2);

    printf("\n");

    printf("O segundo vetor resultante e: \n");
    leituraResultante(resultante2, aux2);

    return 0;
}