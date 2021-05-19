#include <stdio.h>


void primos(){
    int repeticoes=0, numero=100, contador;

    do{
        contador=0;
        for(int i=3; i<=numero; i++){
            if((numero%i)==0){
                contador++;
            }
        }
        if(contador==1){
            printf("%d\t", numero);
            repeticoes++;
        }
        numero++;
    }while(repeticoes<3);
}


int main(){
    printf("Os 3 primeiros numeros primos depois de 100 sao:\n");
    primos();

    return 0;
}