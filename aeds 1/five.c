#include <stdio.h>

int
main ()
{
  double notaUm = 0;
  double notaDois = 0;
  double notaTres = 0;
  int pesoUm;
  int pesoDois;
  int pesoTres;
  
  printf("Insira a primeira nota e, logo após, seu peso: ");
  scanf("%lf", &notaUm);
  scanf("&d", &pesoUm);
  
  printf("Insira a segunda nota e, logo após, seu peso: ");
  scanf("%lf", &notaDois);
  scanf("%d", &pesoDois);
  
  printf("Insira a terceira nota e, logo após, seu peso: ");
  scanf("%lf", &notaTres);
  scanf("%d", &pesoTres);
  
  double mediaPonderada = ((notaUm*pesoUm) + (notaDois*pesoDois) + (notaTres*pesoTres)) / (pesoUm+pesoDois+pesoTres);
  
  printf("A média ponderada é: %.2f", mediaPonderada);
  return 0;
}
