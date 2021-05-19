#include <stdio.h>
#include <stdlib.h>

int teste(int* vetor, int n, int valor){
    if(vetor[n-1] == valor)
    return 1;
    else if((n-1)==0)
    return 0;
    else{
        return teste(vetor, --n, valor);
    }

    return 0;
}
int contador(int* vetor, int n, int valor, int cont){
    if(vetor[n-1] == valor){
        cont++;
        return cont;
    }
    else if((n-1)==0){
    cont++;
    return cont;
    }
    else{
        cont++;
        return contador(vetor, --n, valor, cont);
    }
}

void preencherVetor(int* vetor, int n){
    for(int i=0; i<n; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
}


int main(){
    printf("Insira o tamanho do vetor: ");
    int n; scanf("%d", &n);

    printf("\nPreencha o vetor: \n");
    int* vetor = (int *)calloc(n, sizeof(int));
    preencherVetor(vetor, n);

    printf("\nInsira um valor para teste: ");
    int valor; scanf("%d", &valor);

    if(teste(vetor, n, valor)){
    printf("\nO numero solicitado esta presente no vetor!");
    }
    else{
        printf("\nO numero solicitado NAO esta presente no vetor!");
    }
    
    printf("\nO numero de comparacoes feitas foram: %d", contador(vetor, n, valor, 0));

    return 0;
}