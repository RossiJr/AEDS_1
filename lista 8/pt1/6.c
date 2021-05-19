#include <stdio.h>
#include <conio.h>

void preencherVet(int* vetor){
    for(int i=0; i<10;i++){
        printf("Insira o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}
void preencherVetFl(float* vetor){
    for(int i=0; i<10;i++){
        printf("Insira o valor da posicao %d: ", i);
        scanf("%f", &vetor[i]);
    }
}

void valorVendedor(float* porcentagem, int* total, float* final){
    for(int i=0; i<10;i++){
        final[i] = total[i] + porcentagem[i] * total[i];
    }
}

void relatorio(float* percentual, float* total){
    printf("\nO percentual de comissao e o valor total recebido pelos funcionarios estao disposto na tabela abaixo:\n");
    printf("Numero\t|\tPercentual\t|\tValor Total\n");
    for (int i=0; i<10; i++){
        printf("%d\t|\t%.3f\t|\tR$%.2f\n", i, percentual[i], total[i]);
    }
    printf("\n");
}

void totalDeVendas(int* total){
    printf("\nTabela sobre total de vendas:\nNumero\t|\tTotal de Vendas\n");
        for (int i=0; i<10; i++){
        printf("%d\t|\t%d\n", i, total[i]);
    }
    printf("\n");
}

void maiorMenor(float* total){
    int posicaoMenor, posicaoMaior;
    float maior, menor;
    menor = total[0];
    maior = total[0];
    for(int i=0; i<10; i++){
        if(total[i]>=maior){
            maior = total[i];
            posicaoMaior = i;
        }
        if(total[i]<=menor){
            menor = total[i];
            posicaoMenor = i;
        }
    }

    printf("\nPosicao\tMaior\t|\tPosicao\tMenor\n");
    printf("%d\t%.1f\t|\t%d\t%.1f\n", posicaoMaior, maior, posicaoMenor, menor);
}

int main(){
    int totalVendas[10], nome[10];
    float final[10], percentualComissao[10];
    printf("Insira os codigo dos funcionario\n");
    preencherVet(nome);
    printf("\n");
    printf("Insira o percentual de cada funcionario, respectivamente\n");
    preencherVetFl(percentualComissao);
    printf("\n");
    printf("Insira o total de vendas de cada funcionario\n");
    preencherVet(totalVendas);
    printf("\n");

    valorVendedor(percentualComissao, totalVendas, final);

    relatorio(percentualComissao, final);
    printf("Aperte qualquer tecla para prosseguir... ");
    getch();
    totalDeVendas(totalVendas);
    printf("Aperte qualquer tecla para prosseguir... ");
    getch();
    maiorMenor(final);
    
    return 0;
}