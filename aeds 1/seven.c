#include <math.h>
#include <stdio.h>

int main()
{
    double pesagem;
    double pesagemK;
    printf("Insira a pesagem: ");
    scanf("%lf", &pesagem);
    pesagem += pesagem * 1000;
    
    int diasDecorridos;
    printf("Insira a quantidade de dias decorridos: ");
    scanf("%d", &diasDecorridos);    
    pesagem = pesagem - (((pesagem * diasDecorridos) / 30)/ 2);
    pesagemK = pesagem / 1000;
    printf("Resta %.1f gramas de ração, Equivalente a: %.1f", pesagem, pesagemK);
    
    
//Corrigir Código


    return 0;
}
