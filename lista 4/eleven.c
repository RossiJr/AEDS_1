/*11.  Faça  um  algoritmo  para  ler  um  valor  X  
(validar  para  aceitar  apenas  valores  entre  1  [inclusive]  e  10 [inclusive]). Escrever a tabuada de X. */

#include <stdio.h>

int main(){                                             //inicio
printf("Insira um numero entre 1 e 10: ");
int numero, i, aux; scanf("%d", &numero);

if(numero>=1 && numero<=10){                            //teste para 1<=x<=10
    for(i=0;i<=10;i++){
        aux = numero * i;
        printf("%d x %d = %d\n", i, numero, aux);       //Tabuada do numero
    }
}


    return 0;                                           //fim
}