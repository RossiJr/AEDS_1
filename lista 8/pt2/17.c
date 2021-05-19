#include <stdio.h>

void preencherMatriz(int matriz[10][10], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
float mediaDiagonal(int matriz[10][10]){
    float media=0;
    for(int i=0; i<10; i++){
        media+=(int)matriz[i][i];
    }

    return (media/10);
}


int main(){
    int matriz[10][10];
    printf("Preencha a matriz: \n");
    preencherMatriz(matriz, 10, 10);

    printf("\nMedia da diagonal principal: %.1f", mediaDiagonal(matriz));

    return 0;
}