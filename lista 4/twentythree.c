/*23. Faça um algoritmo que receba uma sequência de números e retorne o maior e o menor número da sequência. 
A quantidade de números n é fornecida pelo usuário. */

#include <stdio.h>

int main(){
printf("Insira a quantidade de numeros a ler: ");
int n; scanf("%d", &n);
int numero, maior, menor;

for(int i=1;i<=n;i++){
    printf("Numero %d: ", i);
    scanf("%d", &numero);
    if (i==1){
        menor=maior=numero;                                                     //comecar os valores como maior e menor, assim o programa consegue ler um valor menor que 0
    }
    if(numero >= maior){                                                        //definir o maior
    maior = numero;
    }
    if(numero<=menor){                                                          //definir o menor
    menor=numero;
    }
}

printf("O maior e o menor numero sao: %d e %d", maior, menor);

    return 0;
}