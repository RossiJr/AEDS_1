// O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distri-
// buidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a

// seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.

#include <stdio.h>

int main()
{
    //Input de dados
    printf("Insira o o custo de fabrica, em reais, do carro: ");
    double custoF, preco;
    scanf("%lf", &custoF);

    //Processamento com Output de dados
    if (custoF <= 12000)
    {
        preco = custoF + (custoF * 0.05);
        printf("O valor final do carro, em reais, e: %.2f", preco);
    }
    else if (custoF > 12000 && custoF <= 25000)
    {
        preco = custoF + (custoF * 0.1) + (custoF * 0.15);
        printf("O valor final do carro, em reias, e: %.2f", preco);
    }
    else
    {
        preco = custoF + (custoF * 0.15) + (custoF * 0.2);
        printf("O valor final do carro, em reais, e: %.2f", preco);
    }

    return 0;
}