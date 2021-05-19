#include <stdio.h>
#include <conio.h>

void preencherMatriz(int matriz[5][5], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
int elementosLinha4(int matriz[5][5]){
    int soma=0;
    for(int i=0; i<5; i++){
        soma += matriz[3][i];
    }

    return soma;
}
int elementosColuna2(int matriz[5][5]){
    int soma=0;
    for(int i=0; i<5; i++){
        soma += matriz[i][1];
    }

    return soma;
}
int elementosPrincipal(int matriz[5][5]){
    int soma=0;
    for(int i=0; i<5; i++){
        soma += matriz[i][i];
    }
    
    return soma;
}
int elementosSecundaria(int matriz[5][5]){
    int soma=0;
    for(int i=0, j=4; j>=0; i++, j--){
        soma += matriz[i][j];
    }
    
    return soma;
}
int todosElementos(int matriz[5][5]){
    int soma=0;
    for(int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            soma += matriz[i][j];
        }
    }

    return soma;
}




int main(){
    int matriz[5][5], somaLinha4, somaColuna2, diagonalPrincipal, diagonalSecundaria, somaElementos;
    printf("Preencha a matriz: \n");
    preencherMatriz(matriz, 5, 5);

    somaLinha4 = elementosLinha4(matriz);
    somaColuna2 = elementosColuna2(matriz);
    diagonalPrincipal = elementosPrincipal(matriz);
    diagonalSecundaria = elementosSecundaria(matriz);
    somaElementos = todosElementos(matriz);

    printf("\nSoma dos elementos da linha 4: %d", somaLinha4);
    printf("\nSoma dos elementos da coluna 2: %d", somaColuna2);
    printf("\nSoma dos elementos da diagonal principal: %d", diagonalPrincipal);
    printf("\nSoma dos elementos da diagonal secundaria: %d", diagonalSecundaria);
    printf("\nSoma dos elementos de todos elementos: %d", somaElementos);




    return 0;
}