// Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
// e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de re-
// frigeração).

// Calcule e mostre:
// ■ O valor do aumento, usando as regras que se seguem.
// ■ O valor do imposto, usando as regras a seguir.
// O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5%
// do preço; caso contrário, pagará 8%. Os requisitos são:
// Categoria: 2
// Situação: R
// ■ O novo preço, ou seja, o preço mais aumento menos imposto.
// ■ A classificação, usando as regras a seguir.

#include <stdio.h>

int main()
{

    //Input de dados
    printf("Primeiramente, insira o preco do produto, em reais: ");
    double preco, aumento, imposto;
    scanf("%lf", &preco);
    printf("Agora insira a categoria do produto(1-> limpeza, 2-> alimentacao, 3-> vestuario) e, logo apos, a situacao(R-> refrigerada, N-> nao refrigerada): ");
    int cat;
    char situ;
    scanf("%d &c", &cat, &situ);
    char clas[6] = "      ";

    //Processamento de dados de acordo com a tabela 1
    switch (cat)
    {
    case 1:
        if (preco > 25)
        {
            aumento = preco * 0.12;
        }
        else
        {
            aumento = preco * 0.05;
        }
        break;

    case 2:
        if (preco > 25)
        {
            aumento = preco * 0.15;
        }
        else
        {
            aumento = preco * 0.08;
        }
        break;

    case 3:
        if (preco > 25)
        {
            aumento = preco * 0.18;
        }
        else
        {
            aumento = preco * 0.1;
        }
        break;

    default:
        printf("Codigo invalido");
        return 0;
        break;
    }
    //Output de dados (tabela 1)
    printf("O produto teve um aumento de %.2lf reais.\n", aumento);

    //Processamento de dados
    if (situ == 'R' || cat == 2)
    {
        imposto = preco * 0.05;
    }
    else
    {
        imposto = preco * 0.08;
    }

    //Output de dados
    printf("O valor a ser pago de imposto sera %.2lf reais.\n", imposto);

    //Processamento e Output de dados
    preco += aumento - imposto;
    printf("O novo preco do produto sera %.2lf reais.\n", preco);

    //Processamento e Output de dados de acordo com a tabela 2
    if (preco <= 50)
    {
        printf("O novo preco e barato");
        ;
    }
    else if (preco > 50 && preco <= 120)
    {
        printf("O novo preco e normal");
    }
    else
    {
        printf("O novo preco e caro");
    }

    return 0;
}