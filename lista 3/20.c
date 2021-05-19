/* Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa. */

#include <stdio.h>

int main(){
int opc = 0, pesoA=0, pesoB=0, pesoC=0;
float mediaA=0, mediaP=0, notaA=0, notaB=0, notaC=0;
while(opc != 3){
    printf("Menu de opcoes:\n1. Media aritmetica\n2. Media ponderada\n3. Sair");
    printf("\nDigite um valor: ");
    scanf("%d", &opc);

    switch(opc){
        case 1:
        printf("Insira duas notas: ");
        scanf("%f %f", &notaA, &notaB);
        mediaA = (notaA + notaB)/2;
        printf("A media aritmetica e: %.1f\n", mediaA);
        break;

        case 2:
        printf("Insira tres notas e seus respectivos pesos: ");
        scanf("%f %d", &notaA, &pesoA);
        scanf("%f %d", &notaB, &pesoB);
        scanf("%f %d", &notaC, &pesoC);
        mediaP = ((notaA * pesoA) + (notaB * pesoB) + (notaC * pesoC))/(pesoA + pesoB + pesoC);
        printf("A media ponderada e: %.1f\n", mediaP);
        break;
        
        case 3:
        printf("Adeus!!");
        break;
        }
    }





    return 0;
}