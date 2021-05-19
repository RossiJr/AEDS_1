#include <stdio.h>
#include <conio.h>

void preencherMatriz(int matriz[3][5], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
int intervalo(int matriz[3][5]){
    int contador=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            if(matriz[i][j]>15 && matriz[i][j]<20){
                contador++;
            }
        }
    }
    return contador;
}
void leitura(int matriz[3][5]){
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[3][5], contador;
    preencherMatriz(matriz, 3, 5);

    contador = intervalo(matriz);

    printf("\n");

    printf("Elementos da matriz:\n");
    leitura(matriz);

    getch();

    printf("\nElementos entre 15 e 20: %d", contador);






    return 0;
}