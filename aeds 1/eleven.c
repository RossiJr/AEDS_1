/* 11-Pedro comprou um saco de ração com peso em quilos.Ele possui 2 gatos, para os quais fornece a  quantidade  de  ração  em  gramas.
A quantidade  diária  de  ração  fornecida  para  cada  gato  é sempre a mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração 
fornecida para cada gato, calcule e mostre quanto restará de ração no saco após 5 dias. */

#include <math.h>
#include <stdio.h>

int main()
{
    double pesagemSaco;
    double consumoG;
    int diasDecorridos;

    //input de dados
    printf("Insira o valor em kilogramas da pesagem do saco: ");
    scanf("%lf", &pesagemSaco);

    //processamento de dados
    pesagemSaco = pesagemSaco * 1000;

    //input de dados
    printf("Insira quantos gramas de ração cada gato consome por dia: ");
    scanf("%lf", &consumoG);
    printf("Agora insira o número de dias decorridos: ");
    scanf("%d", &diasDecorridos);

    //processamento de dados
    consumoG = pesagemSaco - (consumoG * 2 * diasDecorridos);

    //output de dados
    printf("Ao final dos %d dias, sobrará %lf gramas de ração", diasDecorridos, consumoG);

    return 0;
}