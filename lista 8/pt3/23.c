#include <stdio.h>

void preencherVetor(int* vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}
int testeTriangulo(int* lados){
    int teste, contador=0, aux=0;
    if((lados[0]+lados[1])>=lados[2])
    contador++;
    if((lados[0]+lados[2])>=lados[1])
    contador++;
    if((lados[2]+lados[1])>=lados[0])
    contador++;

    if(contador==3){
    printf("\nE um triangulo!\n");
    aux++;
    }
    else
    printf("\nNao e um triangulo!\n");

    return aux;
}
void testeLado(int* lados){
    if((lados[0]==lados[1])||(lados[0]==lados[2])||(lados[1]==lados[2])){
        printf("\nTriangulo isosceles!\n");
    }
    else if(lados[0]==lados[1] && lados[1]==lados[2]){
        printf("\nTriangulo equilatero");
    }
    else{
        printf("\nTriangulo escaleno!\n");
    }
}

int main(){
    int valores[3], aux;
    printf("Preencha o vetor:\n");
    preencherVetor(valores, 3);

    aux = testeTriangulo(valores);
    if(aux==1)
    testeLado(valores);

    return 0;
}