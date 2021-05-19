/*5.  Faça  um  algoritmo  para  ler  um  valor  N  (validar  para  aceitar  apenas  valores  positivos)
  e  imprimir apalavra PROGRAMACAO N vezes. */

#include <stdio.h>

int main()
{ //Inicio do Programa
    printf("Insira um valor inteiro, maior que 0: ");
    int numero;
    scanf("%d", &numero);

    if (numero >= 0)                            //Condicao validar apenas positivos
    { 
        for (int i = 0; i < numero; i++)        //Laco de repeticao
        { 
            printf("Programacao.\n");
        }
    }
    return 0; //Final do programa
}