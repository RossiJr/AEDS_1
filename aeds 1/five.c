/* 5-Faça um  programa  que  calcule três  notas  e  seus  respectivos  pesos,  calcule  e  mostre a  média ponderada. */

#include <stdio.h>

int main()
{
  double notaUm = 0;
  double notaDois = 0;
  double notaTres = 0;
  int pesoUm;
  int pesoDois;
  int pesoTres;

  //input de dados
  printf("Insira a primeira nota e, logo após, seu peso: ");
  scanf("%lf", &notaUm);
  scanf("&d", &pesoUm);

  //input de dados
  printf("Insira a segunda nota e, logo após, seu peso: ");
  scanf("%lf", &notaDois);
  scanf("%d", &pesoDois);

  //input de dados
  printf("Insira a terceira nota e, logo após, seu peso: ");
  scanf("%lf", &notaTres);
  scanf("%d", &pesoTres);

  //formula de media ponderada
  double mediaPonderada = ((notaUm * pesoUm) + (notaDois * pesoDois) + (notaTres * pesoTres)) / (pesoUm + pesoDois + pesoTres);

  //output de dados processados
  printf("A média ponderada é: %.2f", mediaPonderada);
  return 0;
}
