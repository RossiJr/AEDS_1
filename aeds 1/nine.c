/* 9-Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: área = π * R2 */

#include <math.h>
#include <stdio.h>

int main()
{
    double pi = 3.14;
    double raio;

    //input de dados
    printf("Insira o valor do raio: ");
    scanf("%lf", &raio);

    //processamento de dados
    double area = pi * pow(raio, 2);

    //output de dados
    printf("A area e: %.2f", area);

    return 0;
}
