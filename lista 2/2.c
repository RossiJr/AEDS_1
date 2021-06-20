// Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
// na tabela a seguir:

#include <stdio.h>
#include <conio.h>

int main()
{
    //Input de dados
    printf("Insira suas duas notas: ");
    int a;
    int b;
    scanf("%d %d", &a, &b);

    //Processamento de dados
    double media = (a + b) / 2;

    //Output de dados
    if ((media < 3) && (media > 0))
    {
        printf("Sua media e: %.1lf e voce foi reprovado!", media);
    }
    else if ((media >= 3) && (media < 7))
    {
        printf("Sua media e: %.1lf e voce precisa fazer um exame!", media);
    }
    else if (media >= 7)
    {
        printf("Parabens, sua media e: %.1lf e voce foi APROVADO!!", media);
    }
    else
    {
        printf("NOTAS INVALIDAS, REINICIE O PROGRAMA E INSIRA NOTAS VALIDAS!");
    }
    
    return 0;
}