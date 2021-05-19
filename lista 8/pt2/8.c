#include <stdio.h>
#include <conio.h>

void preencherMatriz(int matriz[3][8], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void soma(int matriz1[3][8], int matriz2[3][8], int resultante[3][8]){
    for(int i=0; i<3; i++){
        for(int j=0; j<8; j++){
            resultante[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}
void leitura(int matriz[3][8]){
    for(int i=0; i<3; i++){
        for(int j=0; j<8; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
void subtracao(int matriz1[3][8], int matriz2[3][8], int resultante[3][8]){
    for(int i=0; i<3; i++){
        for(int j=0; j<8; j++){
            resultante[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}



int main(){
    int matriz1[3][8], matriz2[3][8], matriz3[3][8], matriz4[3][8];
    printf("Preencha a matriz 1:\n");
    preencherMatriz(matriz1, 3, 8);
    printf("\nPreencha a matriz 2:\n");
    preencherMatriz(matriz2, 3, 8);

    soma(matriz1, matriz2, matriz3);

    printf("\nA matriz resultante da soma das duas e: \n");
    leitura(matriz3);

    printf("\nAperte qualquer tecla para prosseguir...");
    getch();

    printf("\n");

    subtracao(matriz1, matriz2, matriz4);

    printf("\nA matriz resultante da subtracao das duas primeiras e: \n");
    leitura(matriz4);

    return 0;
}