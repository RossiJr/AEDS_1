#include <stdio.h>

void preencherMatriz(float matriz[10][5], int linhas, int colunas){
    for(int i=0; i<linhas; i++){                                            //linhas
        for(int j=0; j<colunas; j++){                                       //colunas
            printf("Posicao (%d, %d): ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}
float somaSextaLinha(float matriz[10][5]){
    float soma=0;
    for(int i=5; i<10; i++){
        for(int j=0; j<5; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}


int main(){
    float matriz[10][5];
    printf("Preencha a matriz:\n");
    preencherMatriz(matriz, 10, 5);

    printf("\n");
    printf("A soma dos elementos a partir da sexta linha e: %.1f", somaSextaLinha(matriz));

    return 0;
}