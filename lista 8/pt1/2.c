#include <stdio.h>

int preencherVet(int* vetor){
    for(int i=0; i<7; i++){
        printf("Insira o valor do elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
}
void multiplos(int* vetor){
    for(int i=0; i<7; i++){
        if((vetor[i]%2)==0)
        printf("Elemento %d(%d) - Multiplo de 2\n", i, vetor[i]);
        if((vetor[i]%3)==0)
        printf("Elemento %d(%d) - Multiplo de 3\n", i, vetor[i]);
        if(((vetor[i]%2)==0)&&((vetor[i]%3)==0))
        printf("Elemento %d(%d) - Multiplo de 2 e 3\n", i, vetor[i]);
    }
}


int main(){
    int vect[7];
    vect[7] = preencherVet(vect);
    printf("\n");
    multiplos(vect);
}