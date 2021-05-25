/* 7-Faça um programa que receba o valor de um depósito e o valor da taxa de juros,calcule e mostre o valor do rendimento e o valor total depois do rendimento. */

#include <stdio.h>

int main()
{
    float deposito;
    float taxa;
    float rendimento = 0;

    //input de dados
    printf("Insira o valor do deposito: ");
    scanf("%f", &deposito);
    printf("Agora, insira o valor da taxa de juros, em decimal(ex: 0.1(0.1 == 10%%)): ");
    scanf("%f", &taxa);

    //processamentos de dados
    rendimento = deposito * taxa;
    deposito += rendimento;

    //output de dados
    printf("\nO valor do rendimento foi: R$%.2f\n", rendimento);
    printf("Ja o valor final e: R$%.2f", deposito);

    return 0;
}