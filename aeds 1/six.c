#include <math.h>
#include <stdio.h>

int main()
{
    double salario;
    
    printf("Insira seu salário bruto: ");
    scanf("%lf", &salario);
    
    double salarioGrat = salario + (salario*0.05);
    double salarioImp = salario + (salario*0.07);
    
    salario = salario - salarioImp + salarioGrat;
    
    printf("O salário líquido é: %.2f", salario);

    return 0;
}
