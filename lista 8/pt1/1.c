#include <stdio.h>

int preencherVet(int elementos, int* vetor){
    int *aux = vetor;
    printf("A seguir, insira o valor de cada elemento, em ordem\n\n");
    for(int i=0; i<elementos; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &aux[i]);
    }

    return *aux;
}
void paresImpares(int elementos, int* vetor){
    int contadorP=0, contadorI=0;
    for(int i=0; i<elementos; i++){
            if((vetor[i]%2)>0){
            printf("Elemento %d, com o valor %d, e impar\n", i, vetor[i]);
            contadorP++;
            }
            else{
                printf("Elemento %d, com o valor %d, e par\n", i, vetor[i]);
                contadorI++;
            }
    }
    printf("\nA quantidade de elementos pares e: %d\nJa a de impares e: %d\n", contadorP, contadorI);
}


int main(){
    int vetor[6];
    vetor[6] = preencherVet(6, vetor);
    paresImpares(6, vetor);
    return 0;
}