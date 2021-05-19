/* Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor. */

#include <stdio.h>

void teste(int um, int dois){
    int contador=0;
    if((um%dois)==0){
    printf("0");
    }

    else{
        for(int i=dois+1;i<=um, contador<1;i++){                //teste para proximo divisor
        if((um%i)==0){
            printf("%d", i);
            contador++;                                         //auxiliar para nao imprimir mais de um divisor, apenas o proximo
        }
        }
    }
}

int main(){
    printf("Insira dois valores: ");
    int a, b; scanf("%d %d", &a, &b);

    teste(a, b);

}