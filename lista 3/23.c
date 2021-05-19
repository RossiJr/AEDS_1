/* Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção

desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibi-
lidade de opção inválida e não se preocupe com as restrições como salário inválido.

Menu de opções:
1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair
Digite a opção desejada. 
Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a se-
guir:
Até R$ 210,00 15%
De R$ 210,00 a R$ 600,00 (inclusive) 10%
Acima de R$ 600,00 5%

Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as
férias equivalem a seu salário acrescido de um terço do salário.
Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo
doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário
multiplicado pelo número de meses de trabalho dividido por 12.
Na opção 4: sair do programa.*/

#include <stdio.h>
int main(){
    int opc = 0, mesesDeTrabalho;
    float salario = 0;
    while(opc != 4){
        printf("Menu de opcoes:\n1. Novo salario\n2. Ferias\n3. Decimo terceiro\n4. Sair\nDigite a opcao desejada.\n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
            printf("Insira o salario: ");
            scanf("%f", &salario);
            if (salario <= 210){
                salario += salario * 0.15;
            }
            else if(salario>210 && salario <= 600){
                salario += salario * 0.1;
            }
            else{
                salario += salario * 0.05;
            }
            printf("Valor do novo salario: R$%.2f\n", salario);
            break;

            case 2:
            printf("Insira o salario: ");
            scanf("%f", &salario);
            salario += salario / 3;
            printf("Valor das ferias: R$%.2f\n", salario);
            break;

            case 3:
            printf("Insira o salario e quantos meses houveram de trabalho no ano, respectivamente: ");
            scanf("%f %d", &salario, &mesesDeTrabalho);
            salario = salario * mesesDeTrabalho / 12;
            printf("Valor do decimo terceiro: R$%.2f\n", salario);
            break;

            case 4:
            return 0;
            break;

            default:
            printf("O valor inserido e invalido!\n");

        }
    }


    return 0;
}