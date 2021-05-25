/* 8-Faça  um  programa  que   calcule  e  mostre  a  área de  um   triângulo.Sabe-se que: área =base*altura/2. */

#include <math.h>
#include <stdio.h>

int main()
{
    double base;
    double altura;

    //leitura de dados
    printf("Insira a base: ");
    scanf("%lf", &base);
    printf("Insira a altura: ");
    scanf("%lf", &altura);

    double area = base * altura / 2;

    //impressao do valor processado
    printf("A area e: %.2f", area);

    return 0;
}
