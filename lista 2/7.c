// Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
// programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
// ele não tenha direito ao aumento.

#include <stdio.h>

int main()
{
    //Input de dados
    printf("Insira o salario do funcionario: ");
    double salario;
    scanf("%lf", &salario);

    //Processamento de dados com Output
    if (salario >= 500)
    {
        printf("Voce nao recebera um aumento!");
    }
    else
    {
        double novoSalario = salario + (salario * 30 / 100);
        printf("Seu salario agora e: %.2lf", novoSalario);
    }

    return 0;
}