/* Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■ a quantidade de pessoas com idade superior a 50 anos;
■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas. */

#include <stdio.h>

int main()
{

    float altura = 0, media = 0, porcentagem = 0;
    float pesoC = 0;
    float idade = 0, peso = 0;
    float qtdMaiCinq = 0;
    int nMedia = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Insira a idade(anos), altura(m) e o peso(Kg): ");
        scanf("%f %f %f", &idade, &altura, &peso);
        if (idade > 50)
        {
            qtdMaiCinq++;
        }
        if (idade < 20 && idade > 10)
        {
            media += altura;
            nMedia++;
        }
        if (peso < 40)
        {
            pesoC++;
        }
    }

    media = media / nMedia;
    porcentagem = (pesoC / 5) * 100;

    printf("A quantidade de pessoas com idade superior a 50 anos e: %.1f\n", qtdMaiCinq);
    printf("A media das alturas de pessoas entre 10 e 20 e: %.1f \n ", media);
    printf("A porcentagem de pessoas com peso inferior a 40 e: %.1f%% ", porcentagem);

    return 0;
}