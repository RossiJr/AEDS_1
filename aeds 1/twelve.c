/* 12-Faça um programa que receba um numero real e encontre e mostre a parte inteira deste número.  */

#include <math.h>
#include <stdio.h>

int main()
{
    double x;

    //input de dados
    printf("Insira um numero: ");
    scanf("%lf", &x);

    //casting
    x = (int)x;

    //output de dados
    printf("A parte real e: %.0f", x);

    return 0;
}