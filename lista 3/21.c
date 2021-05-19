/* Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código.
Os códigos utilizados são:

1, 2, 3, 4 Votos para os respectivos candidatos
5 Voto nulo
6 Voto em branco

Faça um programa que calcule e mostre:
■ o total de votos para cada candidato;
■ o total de votos nulos;
■ o total de votos em branco;
■ a porcentagem de votos nulos sobre o total de votos; e
■ a porcentagem de votos em branco sobre o total de votos.
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá
mostrar uma mensagem. */

#include <stdio.h>

int main(){
    printf("Numeros 1, 2, 3 e 4 para tais candidatos.\nNumero 5 para voto nulo.\nNumero 6 para voto em branco.\nNumero 0 para finalizar o programa\n");
    int voto = 1;
    float c1=0, c2=0, c3=0, c4=0, vN=0, vB=0;
    float porcN = 0, porcB=0;
    while (voto != 0){
        printf("Insira o codigo: ");
        scanf("%d", &voto);
        switch(voto){
            case 1:
            c1++;
            break;

            case 2:
            c2++;
            break;

            case 3:
            c3++;
            break;

            case 4:
            c4++;
            break;

            case 5:
            vN++;
            break;
            
            case 6:
            vB++;
            break;

            case 0:
            printf("Programa encerrado!\n");
            break;

            default:
            printf("Codigo invalido, insira outro...\n");
            break;
        }
    }
    printf("Candidato:   |  1  |  2  |  3  |  4  |\n");
    printf("Votos:       |  %.0f  |  %.0f  |  %.0f  |  %.0f  |\n", c1, c2, c3, c4);
    printf("---x--x---\n");
    printf("Votos nulos: %.0f\n", vN);
    printf("Votos em branco: %.0f\n", vB);

    porcN = vN/(c1+c2+c3+c4+vN+vB)*100;
    porcB = vB/(c1+c2+c3+c4+vN+vB)*100;

    printf("---x--x---\nPorcentagem de votos nulos: %.1f%%\n", porcN);
    printf("Porcentagem de votos brancos: %.1f%%\n", porcB);



    return 0;
}