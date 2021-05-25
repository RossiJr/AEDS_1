/* 10-Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade dessa pessoa e quantos anos ela terá em 2050. */

#include <math.h>
#include <stdio.h>

int main()
{
    int nascimento;
    int ano;

    //input de dados
    printf("Insira o ano de nascimento: ");
    scanf("%d", &nascimento);
    printf("Insira um ano para saber a idade da pessoa neste ano: ");
    scanf("%d", &ano);

    //testes condicionais com processamento e output de dados
    if (ano > nascimento)
    {
        ano -= nascimento;
        printf("A idade que esta pessoa terá é: %d", ano);
    }
    else if (ano == nascimento)
    {
        printf("A idade que esta pessoa terá é: 0 anos e alguns meses.");
    }
    else
    {
        printf("Reinicie um programa e insira um ano maior que a data de nascimento.");
    }

    return 0;
}
