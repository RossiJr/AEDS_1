#include <stdio.h>

void preencherMatriz(float matriz[5][5], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}
float diagonalSecundaria(float matriz[5][5]){
    float diagonal=0;
    for(int i=0, j=4; i<5; i++, j--){
        diagonal += matriz[i][j];
    }
    return diagonal;
}

int main(){
    float matriz[5][5];
    printf("Preencha a matriz:\n");
    preencherMatriz(matriz, 5, 5);

    printf("\nO valor da diagonal secundaria e: %.1f", diagonalSecundaria(matriz));

    return 0;
}