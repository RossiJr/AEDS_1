#include <stdio.h>

void preencherMatriz(float matriz[3][3], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}
void multMatriz(float matriz[3][3], float numero){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz[i][j]*=numero;
        }
    }
}
void leitura(float matriz[3][3], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%.1f\t", matriz[i][j]);
        }
        printf("\n");
    }
}



int main(){
    float matriz[3][3];
    printf("Insira os elementos da matriz:\n");
    preencherMatriz(matriz, 3, 3);

    printf("\nAgora insira um numero: ");
    float numero; scanf("%f", &numero);

    multMatriz(matriz, numero);

    printf("\nMatriz resultante: \n");
    leitura(matriz, 3, 3);

    return 0;
}