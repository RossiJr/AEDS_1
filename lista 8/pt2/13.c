#include <stdio.h>

void preencherMatriz(int matriz[6][4], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
int maiorElementoLinha(int matriz[6][4], int linha){
    int maior=matriz[0][0];
    for(int i=0; i<4; i++){
        if(maior <= matriz[linha][i]){
            maior = matriz[linha][i];
        }
    }
    
    return maior;
}
void multiplicacao(int matriz[6][4], int resultante[6][4]){
    for(int i=0; i<6; i++){
        for(int j=0; j<4; j++){
            resultante[i][j] = matriz[i][j] * maiorElementoLinha(matriz, i);
        }
    }
}
void leitura(int matriz[6][4], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}


int main(){
    int matriz[6][4], resultante[6][4];
    printf("Preencha a matriz: \n");
    preencherMatriz(matriz, 6, 4);
    multiplicacao(matriz, resultante);

    printf("\nA matriz resultante e:\n");
    leitura(resultante, 6, 4);

    return 0;
}