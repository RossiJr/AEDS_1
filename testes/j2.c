/* 8.Crie um programa que recebe dois valores. Em seguida, seu código deveapresentar um menu, oferecendo as opções “+, -, , /”. 
Caso o usuário digite ‘+’,os valores serão somados, caso o usuário digite ‘-’, os valores serão subtraídos,caso o usuário digite ‘’, 
os valores serão multiplicados e caso o usuário digite ‘ /’,os valores serão divididos.(Use escolha) */

#include <stdio.h>

int main()
{
    printf("Insira dois valores: ");
    float a = 0, b = 0, operacao = 0;
    scanf("%f %f", &a, &b);
    short aux = 1;

    printf("+ -> para somar o primeiro com o segundo.\n");
    printf("- -> para subtrair o primeiro com o segundo.\n");
    printf("* -> para multiplicar o primeiro com o segundo.\n");
    printf("/ -> para dividir o primeiro com o segundo.\n");

    char opc;
    scanf("%s", &opc);
    if (opc == '+')
    {
        operacao = a + b;
    }
    else if (opc == '-')
    {
        operacao = a - b;
    }
    else if (opc == '*')
    {
        operacao = a * b;
    }
    else if (opc == '/')
    {
        operacao = a / b;
    }
    else
    {
        printf("Comando invalido!");
        aux = 0;
    }

    if (aux)
        printf("O resultado e: %.1f", operacao);

    return 0;
}