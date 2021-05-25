/* 2-Faça um programa para calcular  e mostrar o salário reajustado de um funcionário. 
Oaumento deve ser de 10%. O programa recebe um número real e retorna a o valor reajustado. */

#include <stdio.h>

int main()
{
    double salario = 0;
    int aumento = 0;

    //Entrada de dados
    printf("Insira seu salário: ");
    scanf("%lf", &salario);
    printf("Insira quantos em porcentagem vai aumentar: ");
    scanf("%d", &aumento);

    salario += salario * aumento / 100;

    //Impressao do dado processado
    printf("O seu salário atualizado é: %.2f", salario);

    return 0;
}
