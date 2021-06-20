// Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
// Para idade inferior a 5, deverá mostrar mensagem.

#include <stdio.h>

int main()
{
    //Input de dados
    printf("Insira a idade da pessoa: ");
    int idade;
    scanf("%d", &idade);

    //Processamento com Output de dados de acordo com a tabela
    if (idade >= 5 && idade <= 7)
    {
        printf("Infantil");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Juvenil");
    }
    else if (idade >= 11 && idade <= 15)
    {
        printf("Adolescente");
    }
    else if (idade >= 16 && idade <= 30)
    {
        printf("Adulto");
    }
    else if (idade > 30)
    {
        printf("Senior");
    }
    else
    {
        printf("Nova demais");
    }

    return 0;
}