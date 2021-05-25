/* 1-Determinar a soma e a média de3 númerosentrados pelo teclado. */

#include <stdio.h>

int main()
{
    //Leitura dos valores
    printf("Insira três números: ");

    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    double media = (a + b + c) / 3;

    //Impressao do valor processado
    printf("A soma é: %.1f", media);

    return 0;
}
