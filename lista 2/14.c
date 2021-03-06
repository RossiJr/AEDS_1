// Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
// o novo salário.

#include <stdio.h>

int main()
{
    //Input de dados
    printf("Insira salario do funcionario ");
    double salario, novoSalario;
    scanf("%lf", &salario);

    //Processamento e Output de dados de acordo com a tabela
    if (salario <= 300)
    {
        novoSalario = salario + (salario * 0.5);
        printf("O valor do salario com a correcao e: %.2lf", novoSalario);
    }
    else if (salario > 300 && salario <= 500)
    {
        novoSalario = salario + (salario * 0.4);
        printf("O valor do salario com a correcao e: %.2lf", novoSalario);
    }
    else if (salario > 500 && salario <= 700)
    {
        novoSalario = salario + (salario * 0.3);
        printf("O valor do salario com a correcao e: %.2lf", novoSalario);
    }
    else if (salario > 700 && salario <= 800)
    {
        novoSalario = salario + (salario * 0.2);
        printf("O valor do salario com a correcao e: %.2lf", novoSalario);
    }
    else if (salario > 800 && salario <= 1000)
    {
        novoSalario = salario + (salario * 0.1);
        printf("O valor do salario com a correcao e: %.2lf", novoSalario);
    }
    else
    {
        novoSalario = salario + (salario * 0.05);
        printf("O valor do salario com a correcao e: %.2lf", novoSalario);
    }

    return 0;
}