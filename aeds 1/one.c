
#include <stdio.h>

int main()
{
    printf("Insira três números: ");
    
    int a, b, c; 
    scanf("%d", &a);
    scanf("%d", &b) ;
    scanf("%d", &c);
    
    double media = (a+b+c)/3;
    
    printf("A soma é: %.1f", media);

    return 0;
}
