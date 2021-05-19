#include <stdio.h>
#include <conio.h>

void preencherMatriz(float matriz[5][5], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}
float maiorValor(float matriz[5][5]){
    float maior=matriz[0][0];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(matriz[i][j]>=maior){
                maior=matriz[i][j];
            }
        }
    }
    return maior;
}
void copia(float original[5][5], float resultante[5][5]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            resultante[i][j] = original[i][j];
        }
    }
}
void multiplicacao(float matriz[5][5], float resultante[5][5]){
    for(int i=0; i<5; i++){
        resultante[i][i] = matriz[i][i] * maiorValor(matriz);
    }
}
void leitura(float matriz[5][5], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%.1f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    float matriz[5][5], resultante[5][5];
    printf("Preencha a matriz:\n");
    preencherMatriz(matriz, 5, 5);

    copia(matriz, resultante);
    multiplicacao(matriz, resultante);

    printf("\nMatriz resultante:\n");
    leitura(resultante, 5, 5);




    return 0;
}