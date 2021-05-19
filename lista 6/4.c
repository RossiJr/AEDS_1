/* Crie uma sub-rotina que gere e mostre os três primeiros números primos acima de 100. */

#include <stdio.h>

void primos(){
    int numero = 101, contador1=0, contador2=0;

    do{
        for(int i=2; i<numero; i++){
            if(numero%i){
                contador2++;
            }
        }
        if(contador2 == 0){
            contador1++;
            printf("%d   ", numero);
        }

        contador1=0; contador2=0; numero++;
    }while(contador1<3);


}

int main(){
primos();

return 0;
}