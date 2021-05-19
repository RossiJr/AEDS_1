#include <math.h>
#include <stdio.h>

int main()
{
 
 double pesagemSaco;
 double consumoG;
 int diasDecorridos;
 
 printf("Insira o valor em kilogramas da pesagem do saco: ");
 scanf("%lf", &pesagemSaco);
 pesagemSaco = pesagemSaco * 1000;
 
 printf("Insira quantos gramas de ração cada gato consome por dia: ");
 scanf("%lf", &consumoG);
 printf("Agora insira o número de dias decorridos: ");
 scanf("%d", &diasDecorridos);
 consumoG = pesagemSaco-(consumoG * 2 * diasDecorridos);

 
 printf("Ao final dos %d dias, sobrará %lf gramas de ração", diasDecorridos, consumoG);    
    

    return 0;
}