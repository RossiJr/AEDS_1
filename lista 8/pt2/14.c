#include <stdio.h>

void preencherMatriz(int matriz[2][3], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
int intervalo(int matriz[2][3]){
    int contador=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            if(matriz[i][j]<5 || matriz[i][j]>15)
            contador++;
        }
    }

    return contador;
}


int main(){
    int matriz[2][3], contador;
    printf("Preencha a matriz: \n");
    preencherMatriz(matriz, 2, 3);

    contador = intervalo(matriz);

    printf("\n%d numeros fora do intervalo de 5 e 15.", contador);

    return 0;
}