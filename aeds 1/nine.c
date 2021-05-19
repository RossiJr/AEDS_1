#include <math.h>
#include <stdio.h>

int main()
{
    double pi = 3.14;
    
    double raio;
    
    printf("Insira o valor do raio: ");
    scanf("%lf", &raio);
    
    double area = pi * pow(raio, 2);
    
    printf("A area e: %.2f", area);
    
    return 0;
}
