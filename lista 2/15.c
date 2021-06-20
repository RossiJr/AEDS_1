// Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um pro-
// grama que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
// investimento, de acordo com o tipo de investimento.

#include <stdio.h>

int main()
{
    //Input de dados
    printf("----x--x----\n");
    printf(" Insira qual tipo de investimento deseja realizar:\n1: Poupança, com um rendimento mensal de 3%%.\n2: Fundos de renda fixa, com um rendimento mensal de 4%%."); //Menu para tabela
    int opc;
    scanf("%d", &opc);
    printf("----x--x----\n");
    printf("Agora insira o valor: ");
    double valor;
    scanf("%lf", &valor);

    //Processamento e output de dados de acordo com a tabela
    switch (opc)
    {
    case 1:
        valor += valor * 0.03;
        printf("Valor corrigido apos um mes: %.2lf", valor);
        break;

    case 2:
        valor += valor * 0.04;
        printf("Valor corrigido apos um mes: %.2lf", valor);
        break;

    default:
        printf("Reinicie o programa, valor invalido");
        break;
    }

    return 0;
}