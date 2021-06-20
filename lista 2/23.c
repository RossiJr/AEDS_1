// Faça um programa que receba:
// ■ o código do produto comprado; e
// ■ a quantidade comprada do produto.
// Calcule e mostre:
// ■ o preço unitário do produto comprado, seguindo a Tabela I;
// ■ o preço total da nota;
// ■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
// ■ o preço final da nota depois do desconto.

#include <stdio.h>

int main()
{
    //Input de dados
    printf("Insira o codigo do produto: ");
    int codigo;
    scanf("%d", &codigo);
    printf("Agora insira a quantidade que deseja comprar: ");
    int qtd;
    scanf("%d", &qtd);
    double precoFinal = 0;

    //Processamento de dados de acordo com a tabela 1
    if (codigo >= 1 && codigo <= 10)
    {
        precoFinal = qtd * 10;
    }
    else if (codigo >= 11 && codigo <= 20)
    {
        precoFinal = qtd * 15;
    }
    else if (codigo >= 21 && codigo <= 30)
    {
        precoFinal = qtd * 20;
    }
    else if (codigo >= 31 && codigo <= 40)
    {
        precoFinal = qtd * 40;
    }
    else
    {
        printf("Codigo invalido\n");
    }

    //Processamento de dados de acordo com a tabela 2
    if (precoFinal <= 250)
    {
        precoFinal -= precoFinal * 0.05;
    }
    else if (precoFinal > 250 && precoFinal <= 500)
    {
        precoFinal -= precoFinal * 0.1;
    }
    else
    {
        precoFinal -= precoFinal * 0.15;
    }

    //Output de dados
    if (precoFinal > 0)
    {
        printf("O valor a pagar e: R$%.2lf", precoFinal);
    }
    
    return 0;
}