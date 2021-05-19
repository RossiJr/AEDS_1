#include <math.h>
#include <stdio.h>

int main()
{
    double base;
    double altura;
    
    printf("Insira a base: ");
    scanf("%lf", &base);
    printf("Insira a altura: ");
    scanf("%lf", &altura);
    
    double area = base * altura / 2;
    
    printf("A area e: %.2f", area);

    return 0;
}
