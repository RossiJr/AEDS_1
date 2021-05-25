/* 6-Faça  um  programa  que  receba  o  salário  base  de  um  funcionário,calcule  e  mostre  o  salário  a receber,sabendo-se que o funcionário tem 
gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base  */

#include <math.h>
#include <stdio.h>

int main()
{
    double salario;

    //input de dados
    printf("Insira seu salário bruto: ");
    scanf("%lf", &salario);

    //processamento de dados
    double salarioGrat = salario + (salario * 0.05);
    double salarioImp = salario + (salario * 0.07);
    salario = salario - salarioImp + salarioGrat;

    //output de dados
    printf("O salário líquido é: %.2f", salario);

    return 0;
}
