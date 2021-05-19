#include <stdio.h>

int
main ()
{
  printf ("Insira quatro nC:meros inteiros: ");
  int a, b, c, d;
  scanf ("%d", &a);
  scanf ("%d", &b);
  scanf ("%d", &c);
  scanf ("%d", &d);

  int soma = a + b + c + d;

  printf ("Soma: %d", soma);

  return 0;
}
