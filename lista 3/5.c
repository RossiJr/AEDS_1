#include <stdio.h>
#include <conio.h>

int main(){
    printf("TABUADA DO UM AO DEZ\n");
    printf("aperte qualquer tecla para comecar\n");
    getch();

    int i, j, tabuada;
    for (i=0;i<=10;i++){
        printf("Tabuada do %d\n", i);
        for (j=0;j<=10;j++){
            tabuada = i * j;
            printf("%d x %d = %d\n", i, j, tabuada);
        }
    printf("Aperte a tecla enter para prosseguir para a tabuada do proximo numero\n----x--x---\n");
    getch();
    }
    return 0;
}