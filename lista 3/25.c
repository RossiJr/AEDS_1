/*Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido, e que calcule
e mostre o rendimento mensal de acordo com o tipo do investimento. No final, o programa deverá mostrar
o total investido e o total de juros pagos.
A leitura terminará quando o código do cliente digitado for menor ou igual a 0.*/

#include <stdio.h>

int main()
{
    printf("1. --- Poupanca --- 1,5%%mes\n");
    printf("2. --- Poupanca plus --- 2%%/mes\n");
    printf("3. --- Fundos de renda fixa --- 4%%/mes\n");

    int cod = 4;
    float salario = 0, rendimento=0;

    while (cod != 0){
        printf("Insira o codigo: ");
        scanf("%d", &cod);
        switch(cod){
            case 1:
            printf("Agora insira seu salario: ");
            scanf("%f", &salario);
            rendimento = salario * 0.015;
            printf("O total investido foi R$%.2f, com um rendimento de R$%.2f, ", salario, rendimento);
            salario+=rendimento;
            printf("contabilizando R$%.2f por mes\n", salario);
            break;

            case 2:
            printf("Agora insira seu salario: ");
            scanf("%f", &salario);
            rendimento = salario * 0.02;
            printf("O total investido foi R$%.2f, com um rendimento de R$%.2f, ", salario, rendimento);
            salario+=rendimento;
            printf("contabilizando R$%.2f por mes\n", salario);
            break;

            case 3:
            printf("Agora insira seu salario: ");
            scanf("%f", &salario);
            rendimento = salario * 0.04;
            printf("O total investido foi R$%.2f, com um rendimento de R$%.2f, ", salario, rendimento);
            salario+=rendimento;
            printf("contabilizando R$%.2f por mes\n", salario);
            break;

            case 0:
            printf("Programa encerrado!");
            break;
            
            default:
            printf("Codigo invalido!");
            break;
    }
}

    return 0;
}