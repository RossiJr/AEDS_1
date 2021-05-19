#include <stdio.h>

int preencherVet(int elementos, int* vetor){
    for(int i=0; i<elementos;i++){
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int verificacaoProd(int* vetor, int codigo){
    int contador=0;
    for(int i=0;i<10 && contador==0;i++){
        if(vetor[i] == codigo){
            contador=1;
        }
    }
    return contador;
}

void detalhamento(int* vetor){
    for(int i=0; i<10; i++){
        printf("Posicao %d: %d\n", i, vetor[i]);
    }
}


int main(){
    int codigo[10], totalEstoque[10];
    int codCliente, codProd, qtd;
    preencherVet(10, codigo);
    preencherVet(10, totalEstoque);
printf("\n");
    do{
        printf("Insira o seu codigo: ");
        scanf("%d", &codCliente);
        if(codCliente!=0){
            printf("Insira o codigo do produto: ");
            scanf("%d", &codProd);
            if(verificacaoProd(codigo, codProd)==1){
                printf("Insira a quantidade de produtos que deseja comprar: ");
                scanf("%d", &qtd);
                
                for(int i=0; i<10;i++){
                    if(codigo[i]==codProd){
                        if(qtd<=totalEstoque[i]){
                            totalEstoque[i]-=qtd;
                            printf("\nPedido atendido! Obrigado, volte sempre!!\n");
                        }
                        else{
                            printf("\nProduto fora de estoque!\n");
                        }
                    }
                }
                
            }
            else{
                printf("Codigo de produto invalido!");
            }
        }
    }while(codCliente!=0);

    printf("\n");
    detalhamento(totalEstoque);

    return 0;
}