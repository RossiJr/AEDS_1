/* Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores,
o preço de compra e o preço de venda de cada ação e que calcule e mostre:
■ o lucro de cada ação comercializada;
■ a quantidade de ações com lucro superior a R$ 1.000,00;
■ a quantidade de ações com lucro inferior a R$ 200,00;
■ o lucro total da empresa.
Finalize com o tipo de ação ‘F’. */

#include <stdio.h>

int main(){
    char tipo;
    float precoC=0, precoV=0, lucro=0, lucroEspec;
    int qtd=0, qtd2=0;

    do{
        lucroEspec = 0;
        printf("Insira o tipo da acao, o preco de compra e o preco de venda, respectivamente(caso queira finalizar o programa, digite F 0 0): ");
        scanf("%s", &tipo);
        scanf("%f", &precoC);
        scanf("%f", &precoV);
        lucroEspec = (precoV-precoC);
        printf("\nO lucro desta acao foi: R$%.2f\n", lucroEspec);
        if (lucroEspec > 1000){
            qtd += 1;
        }
        if(lucroEspec < 200){
            qtd2 += 1;
        }
        lucro +=lucroEspec;
    }while(tipo != 'F');
    qtd2--;
printf("A quantidade de acoes com lucro superior a R$1000 foi %d\n", qtd);
printf("A quantidade de acoes com lucro inferior a R$200 foi %d\n", qtd2);
printf("O lucro total da empresa foi: R$%.2f\n", lucro);




    return 0;
}