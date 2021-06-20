// Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a se-
// guir, o novo preço e a classificação.

#include <stdio.h>

int main()
{
    //Input de dados
    float preco;
    printf("Insira o preco do produto: ");
    scanf("%f", &preco);

    //Processamento de dados de acordo com tabela 1
    if (preco <= 50)
    {
        preco += (0.05 * preco);
    }
    else if (preco > 50 && preco <= 100)
    {
        preco += (0.1 * preco);
    }
    else
    {
        preco += (0.15 * preco);
    }

    //Output de dados de acordo com a tabela 2
    if (preco <= 80)
    {
        printf("\nPreco alterado para: R$%.2f  -  Barato", preco);
    }
    else if (preco > 80 && preco <= 120)
    {
        printf("\nPreco alterado para: R$%.2f  -  Normal", preco);
    }
    else if (preco > 120 && preco <= 200)
    {
        printf("\nPreco alterado para: R$%.2f  -  Caro", preco);
    }
    else
    {
        printf("\nPreco alterado para: R$%.2f  -  Muito caro", preco);
    }

    return 0;
}