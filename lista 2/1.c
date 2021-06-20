// Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
// mensagem de aprovado ou reprovado, considerando para aprovação média 7.

#include <stdio.h>

int main()
{
    //Input de valores
    printf("Insira quatro valores: ");
    float a;
    float b;
    float c;
    float d;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    //Processamento de dados
    double media = (a + b + c + d) / 4;

    //Output de dados
    printf("A media e: %.1f\n", media);

    if (media >= 7)
    {
        printf("Aluno aprovado!");
    }
    else
    {
        printf("Aluno reprovado!");
    }

    return 0;
}