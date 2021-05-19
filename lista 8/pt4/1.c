#include <stdio.h>
#include <stdlib.h>

int **alocarMatriz(int linhas, int colunas){
    int **matriz = (int **)calloc (linhas, sizeof(int*));

    for(int i=0; i<linhas; i++){
        matriz[i] = (int*)calloc(colunas, sizeof(int));
    }

    return matriz;
}
void preencherMatriz(int **matriz, int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void lerMatriz(int **matriz, int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
int **multiplicacao(int **matriz1, int **matriz2, int **resultante, int tamanho){
    int aux=0;
    for(int i=0; i<tamanho; i++){                       //posicao linhas
        for(int j=0, c=0; j<tamanho; j++, c++){                   //posicao colunas 
            for(int a=0; a<tamanho; a++){           //colunas
                resultante[i][j] += matriz1[c][a] * matriz2[a][c];
            }
    }
}


    return resultante;
}



int main(){
    printf("Insira o tamanho da matriz NxN: ");
    int tamanho; scanf("%d", &tamanho);

    int **matriz1 = alocarMatriz(tamanho, tamanho);
    int **matriz2 = alocarMatriz(tamanho, tamanho);
    int **matriz3 = alocarMatriz(tamanho, tamanho);
    preencherMatriz(matriz1, tamanho, tamanho);
    printf("\n");
    preencherMatriz(matriz2, tamanho, tamanho);
    
    printf("\n");
    
    lerMatriz(matriz1, tamanho, tamanho);
    printf("\n\tX\n\n");
    lerMatriz(matriz2, tamanho, tamanho);
    
    printf("\n\t=\n\n");

    matriz3 = multiplicacao(matriz1, matriz2, matriz3, tamanho);

    lerMatriz(matriz3, tamanho, tamanho);

    return 0;
}