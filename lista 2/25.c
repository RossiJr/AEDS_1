// Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas

// extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela con-
// sulta à tabela que se segue, na qual:

// H = número de horas extras – (2/3 * (número de horas falta))

#include <stdio.h>

int main()
{
    //Input de dados
    double horasE, horasF, H, premio;
    printf("Insira o numero de horas extras que o funcionario realizou: ");
    scanf("%lf", &horasE);
    printf("Agora, insira o numero de horas faltas: ");
    scanf("%lf", &horasF);

    //Processamento de dados
    horasE = horasE * 60;
    horasF = horasF * 60;

    H = horasE - (2 / 3 * (horasF));

    //Processamento de dados de acordo com a tabela
    if (H >= 2400)
    {
        premio = 500;
    }
    else if (H > 1800 && H < 2400)
    {
        premio = 400;
    }
    else if (H >= 1200 && H < 1800)
    {
        premio = 300;
    }
    else if (H >= 600 && H < 1200)
    {
        premio = 200;
    }
    else
    {
        premio = 100;
    }

    //Output de dados
    printf("O premio que este funcionario vai receber e: R$%.2lf", premio);

    return 0;
}