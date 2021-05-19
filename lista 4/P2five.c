#include <stdio.h>
#include <math.h>

int main(){
    printf("Insira um numero: ");
    double n, lEsquerdo=0, lDireito; scanf("%lf", &n);

    //Lado esquerdo
    for (int i=n;i>=1;i--){                                             //conta do lado esquerdo
        lEsquerdo += pow(i, 2);
    printf("Valor do lado esquerdo: %.lf\n", lEsquerdo);
    }
    lDireito = n*(n+1)*(2*n+1)/6;                                       //conta do lado direito
    printf("\nLado direito: %.lf\n", lDireito);

    if(lEsquerdo==lDireito){
        printf("Igualdade Verdadeira!");
    }
    else{
        printf("Igualdade falsa!");
    }


    return 0;
}