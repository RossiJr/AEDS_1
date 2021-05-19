/* Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Este tempo é chamado na físico-química de MEIA-VIDA.
Dada a massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa se torne menor que 0.5 gramas. 
Ao final do programa escreva a massa inicial e o tempo calculado em horas, minutos e segundos. */

#include <stdio.h>

int main()
{
    int tempo = 0;
    printf("Insira a massa inicial do material: ");
    float massaInicial, aux, tempoH, tempoM;
    scanf("%f", &massaInicial);
    aux = massaInicial;
    if (massaInicial < 0.5)
    {
        printf("A massa inicial ja e menor que 0.5 gramas\n");                  //caso a massa ja comece valendo menos que 0.5g
    }
    else
    {
        while (massaInicial >= 0.5)
        {                                                                       //laço de repeticao
            massaInicial /= 2;                                                  //conta de decrescimo pela metade
            tempo += 50;                                                        //contador de tempo em segundos
        }
    }
    tempoM = (float)tempo / 60;                                                 //tempo em minutos
    tempoH = tempoM / 60;                                                       //tempo em Horas
    printf("A massa inicial era %.2f\n", aux);
    printf("O tempo em segundos, minutos e horas foi, respectivamente, %d %.2f, %.2f\n", tempo, tempoM, tempoH);
    return 0;
}