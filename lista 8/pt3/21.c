#include <stdio.h>

void preencherMatriz(int matriz[10][10], int linhas, int colunas){
    for(int i=0; i<linhas; i++){                                            //linhas
        for(int j=0; j<colunas; j++){                                       //colunas
            printf("Posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void maiorElemento(int matriz[10][10]){
    int maior=matriz[0][1];                                                 //primeiro elemento acima da diagonal principal
    for(int i=1; i<9; i++){                                                 //13-14 percorre a diagonal principal
        for(int j=1; j<9; j++){                     
            if(matriz[i-1][j]>=maior){                                      //seleciona o elemento acima da principal
                maior = matriz[i-1][j];
            }
        }
    }
    printf("\nO maior elemento acima da diagonal principal e: %d", maior);
}


int main(){
    int matriz[10][10];
    printf("Preencha a matriz:\n");
    preencherMatriz(matriz, 10, 10);

    maiorElemento(matriz);

    return 0;
}