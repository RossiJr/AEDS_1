
#include <stdio.h>

int main()
{
    double salario = 0;
    int aumento = 0;
    
    printf("Insira seu salário: ");
    scanf("%lf", &salario);
    printf("Insira quantos em porcentagem vai aumentar: ");
    scanf("%d", &aumento);
    
    salario += salario * aumento/100;
    
    printf("O seu salário atualizado é: %.2f", salario);
    
    return 0;
}
