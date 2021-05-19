#include <stdio.h>
double 
main ()
{
  printf ("Insira tres numeros");

  //Numeros inseridos para a media, juntamente com o calculo da media
  int a, b, c;
  scanf ("%d", &a);
  scanf ("%d", &b);
  scanf ("%d", &c);
  double soma = (a + b + c) / 3;
  return 0;

  //ImpressC#o da media
  printf ("A media e: %.2f", soma);

return 0;
}
