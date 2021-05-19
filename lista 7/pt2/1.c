#include <stdio.h>
#include <stdlib.h>


int imprimirOrdem(int* vetor, int n, int aux){
    if (aux == n-1){
        printf("Posicao %d: %d\n", aux, vetor[aux]);
        return 0;
    }
    else if(aux < n-1){
        printf("Posicao %d: %d\n", aux, vetor[aux]);
        return imprimirOrdem(vetor, n, ++aux);
    }
}
int imprimirContrario(int* vetor, int n){
    if(n-1 > 0){
        printf("Posicao %d: %d\n", n-1, vetor[n-1]);
        return imprimirContrario(vetor, --n);
    }
    else if(n-1 == 0){
        printf("Posicao %d: %d\n", n-1, vetor[n-1]);
        return 0;
    }
}
int somaElementos(int* vetor, int n, int soma){
    if (n-1 == 0){
        soma+=vetor[n-1];
        return soma;
    }
    else if  (n-1 > 0){
        soma+=vetor[n-1];
        return somaElementos(vetor, --n, soma);
    }
}
float mediaElementos(int* vetor, int n, float soma){
    if (n-1 == 0){
        soma+=vetor[n-1];
        return soma;
    }
    else if  (n-1 > 0){
        soma+=vetor[n-1];
        return mediaElementos(vetor, --n, soma);
    }
}


void preencherVetor(int* vetor, int n){
    for(int i=0; i<n; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
}





int main(){
    printf("Digite o tamanho do vetor: ");
    int n; scanf("%d", &n);
    int* vetor = (int *)calloc(n, sizeof(int));

    printf("\nAgora preencha o vetor:\n");
    preencherVetor(vetor, n);

    printf("\n");
    imprimirOrdem(vetor, n, 0);
    printf("\n");

    imprimirContrario(vetor, n);
    printf("\n");

    printf("O valor da soma de todos os elementos e: %d\n", somaElementos(vetor, n, 0));
    printf("O valor da media de todos os elementos e: %.1f\n", mediaElementos(vetor, n, 0)/n);



return 0;
}