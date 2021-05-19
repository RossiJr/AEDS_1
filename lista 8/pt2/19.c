#include <stdio.h>

void preencherMatriz(int matriz[8][6], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void somaLinhasPares(int matriz[8][6], int* somaPares){
    for(int pos=0; pos<4; pos++){
        for(int i=1; i<8; i+=2){
            for(int j=0; j<6; j++){
                somaPares[pos] += matriz[i][j];
            }
        }
    }
}
void leitura(int* somaPares){
    for(int i=0; i<4; i++){
        printf("Linha %d: %d\n", i+2, somaPares[i]);
    }
}


int main(){
    int matriz[8][6], somaPares[4]={0, 0, 0, 0};
    printf("Preencha a matriz:\n");
    preencherMatriz(matriz, 8, 6);

    somaLinhasPares(matriz, somaPares);

    printf("\nSoma das linhas pares:\n");
    leitura(somaPares);

    return 0;
}