/* 3-Faça um programa retornar a raiz quadrada de um número */

#include <stdio.h>
#include <math.h>
int main()
{
  int raiz = 0;
  double resultado = 0;

  //Entrada de dados
  printf("Insira um número maior que 0: ");
  scanf("%d", &raiz);

  //POSSÍVEL raiz
  if (raiz >= 0)
  {
    resultado = sqrt(raiz);
    printf("Raiz de %d C): %.2f", raiz, resultado);
  }

  //NAO É POSSIVEL TIRAR RAIZ
  else
  {
    printf("Reinicie o programa e insira outro valor!");
  }
  return 0;
}
