#include <stdio.h>
#include <conio.h>

void preencherVetor(float* vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Produto %d: ", i+1);
        scanf("%f", &vetor[i]);
    }
}
void preencherMatriz(int matriz[5][10], int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
int qtdEstocadaPorArmazem(int matriz[5][10], int armazem){
    int quantidade=0;
    for(int i=0;i<10; i++){
        quantidade += matriz[armazem][i];
    }
    return quantidade;
}
void estoquePorArmazemGeral(int matriz[5][10]){
    for(int i=0; i<5; i++){
        printf("Armazem %d: %d\n", i+1, qtdEstocadaPorArmazem(matriz, i));
    }
}

int qtdProdutoArmazens(int matriz[5][10], int produto){
    int quantidade=0;
    for(int i=0; i<5; i++){
        quantidade += matriz[i][produto];
    }
    return quantidade;
}
void estoqueArmazensGeral(int matriz[5][10]){
    for(int i=0; i<10; i++){
        printf("Produto %d: %d\n", i+1, qtdProdutoArmazens(matriz, i));
    }
}
int maiorEstoque(int matriz[5][10], int armazem){
    int maior=0, aux=matriz[0][0];
    for(int i=0; i<10; i++){
        if(matriz[armazem][i]>=aux){
            aux = matriz[armazem][i];
            maior = i;
        }
    }

    return maior;
}
void precoMaiorEstoque(int matriz[5][10], float* precos){
    int aux;
    for(int i=0; i<5; i++){
        aux = maiorEstoque(matriz, i);
        printf("O maior preco no armazem %d e: R$%.2f\n", i+1, precos[aux]);
    }

}

void menorEstoque(int matriz[5][10]){
    int menor=matriz[0][0];
    for(int i=0; i<5; i++){
        for(int j=0; j<10; j++){
            if(matriz[i][j]<=menor){
                menor = matriz[i][j];
            }
        }
    }
    printf("\nO menor estoque armazenado e: %d\n", menor);
}

void custoArmazem(int matriz[5][10], float* precos, float* final){
    for(int i=0; i<5; i++){
        for(int j=0; j<10; j++){
            final[i] += (int)matriz[i][j] * precos[j];
        }
    }
}
void leitura(float* final){
    for(int i=0; i<5; i++){
        printf("Armazem %d: R$%.2f\n", i+i, final[i]);
    }
}


int main(){
    float preco[10], final[5]={0, 0, 0, 0, 0};
    printf("Insira o preco dos produtos: \n");
    preencherVetor(preco, 10);
    int estoque[5][10], maioresEstoques[5]={0, 0, 0, 0, 0};
    printf("\nInsira os valores de estoque do produto: \n");
    preencherMatriz(estoque, 5, 10);

    printf("\n");

    //Quantidade em cada armazem
    printf("Quantidade de produtos por armazem: \n");
    estoquePorArmazemGeral(estoque);

    printf("\n");

    //Quantidade de cada produto em todos armazens
    printf("Quantidade de produtos em todos os armazens:\n");
    estoqueArmazensGeral(estoque);

    printf("\n");

    //Preco do produto de maior estoque por armazem
    printf("Os precos dos produtos de maiores estoques por armazem sao:\n");
    precoMaiorEstoque(estoque, preco);

    printf("\n");

    //Menor estoque armazenado
    menorEstoque(estoque);

    printf("\n");

    //Custo de cada armazem
    custoArmazem(estoque, preco, final);
    printf("Valores de cada armazem: \n");
    leitura(final);

    return 0;
}