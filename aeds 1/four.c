/* 4-Faça um programa que receba quatro números inteiros, calcule e retorne a soma destes números */

#include <stdio.h>

int main()
{
  //Input de dados
  printf("Insira quatro numeros inteiros: ");
  int a, b, c, d;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  int soma = a + b + c + d;

  //saida dos dados
  printf("Soma: %d", soma);

  return 0;
}
