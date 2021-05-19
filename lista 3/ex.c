#include <stdio.h>

int main(){
    printf("Insira a quantidade de numeros que deseja digitar: ");
    int nmr; scanf("%d", &nmr);
    printf("Agora, insira o primeiro numero: ");
    int nmr2, fatorial, f2, resultado; 

    for (int i = 0; i<nmr; i++){
        scanf("%d", &nmr2);
        fatorial = nmr2;
        for(int j = 1; j<nmr2; j++){
            fatorial = fatorial * (nmr2-j);
            printf("x %d\n", nmr2-j);
        }
        printf("Resultado final: %d\n", fatorial);
        printf("---x--x---\n");
        printf("Insira o proximo: ");
    }



}