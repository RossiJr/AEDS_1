#include <stdio.h>


int main(){
double soma=0;
int denominador=225, numerador=1, aux=29;

for(numerador=1;numerador<=16384;numerador*=2){
soma += (numerador/denominador);

//---x--x---

denominador -= aux;
aux -= 2;

printf("%.2lf\n", soma);
}

printf("Soma: %.lf", soma);

    return 0;
}
