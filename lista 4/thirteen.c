/* 13. Ler 10 valores e contar quantos estão no intervalo [10,20] e quantos deles estão fora deste intervalo. 
Escrever o resultado das duas contagens. */

#include <stdio.h>

int main (){                                                         //inicio
    printf("Insira 10 valores: ");
    float numero;
    int contador=0, contador2=0, i;                                  

    for(i=0;i<10;i++){                                               //laco de repeticao
        scanf("%f", &numero);
        if(numero>=10 && numero<=20)                                 //teste para ver se esta dentro do intervalo
            contador++;
        else                                                         //caso esteja fora
            contador2++;
    }

    printf("%d numeros estao dentro do intervalo de 10 e 20, e %d estao fora deste intervalo.", contador, contador2);

return 0;                                                            //fim
}