#include <stdio.h>
#include <conio.h>

void preencherMatriz(int matriz[2][4], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
float definicao(int matriz[2][4], int* resultado){
    float media=0;
    int contadorMedia=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            if (matriz[i][j]>12 && matriz[i][j]<20){
                resultado[i]++;
            }
            if((matriz[i][j]%2)==0){
                media+=matriz[i][j];
                contadorMedia++;
            }
        }
    }

    media/=contadorMedia;

    return media;
}
void leitura(int matriz[2][4]){
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
void leituraVetor(int* vetor){
    for(int i=0; i<2; i++){
        printf("Linha %d: %d\n", i, vetor[i]);
    }
}



int main(){
    int matriz[2][4], elementos[2]={0,0};
    float media;
    preencherMatriz(matriz, 2, 4);

    printf("\nMatriz:\n");
    leitura(matriz);

    printf("\nAperte qualquer tecla para prosseguir...");
    getch();

    media = definicao(matriz, elementos);

    printf("Elementos entre 12 e 20 por linha: \n");
    leituraVetor(elementos);

    printf("\nMedia dos elementos pares: %.1f", media);

    return 0;
}