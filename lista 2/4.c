// Faça um programa que receba três números e mostre o maior.

#include <stdio.h>

int main()
{
    //Input de dados
    printf("Insira tres numeros: ");
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    //Processamento de dados com Output de dados
    if (a > b && a > c)
    {
        printf("O maior numero e: %.1f", a);
    }
    else if (b > a && b > c)
    {
        printf("O maior numero e: %.1f", b);
    }
    else
    {
        printf("O maior numero e: %.1f", c);
    }

    return 0;
}