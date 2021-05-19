#include <stdio.h>

int main(){
    printf("Insira 10 numeros: ");
    int numero=0, somaPar=0, somaPrimo=0, primoID;
    float teste=0;
    for (int i=1; i<=10; i++){
        scanf("%d", &numero);
        if((numero%2)==0){
            somaPar += numero;
        }
            for(int j=1;j<=numero;j++){
                teste=numero%j;
                if(teste == 0){
                    primoID++;
                }
            }
        if(primoID == 2){
            somaPrimo+=numero;
        }
        primoID=0;
    }
    printf("A soma dos numeros pares e dos numeros primos sao, respectivamente: %d e %d", somaPar, somaPrimo);



    return 0;
}