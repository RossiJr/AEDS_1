#include <stdio.h>
#include <conio.h>

void preencherMatriz(int matriz[4][6], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void preencherMatriz2(int matriz[6][4], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void somaMatrizes(int matriz1[4][6], int matriz2[6][4], int matriz3[4][6]){
    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[j][i];
        }
    }
}
void leitura(int matriz[4][6]){
    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matrizA[4][6], matrizB[6][4], matrizC[4][6];
    printf("\nPreencha a matriz A:\n");
    preencherMatriz(matrizA, 4, 6);

    printf("\nPreencha a matriz B:\n");
    preencherMatriz2(matrizB, 6, 4);

    somaMatrizes(matrizA, matrizB, matrizC);
    printf("\n");
    printf("Matriz resultante: \n");
    leitura(matrizC);

    return 0;
}