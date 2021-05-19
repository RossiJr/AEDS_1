#include <stdio.h>

int main(){
    printf("Insira o valor do carro: ");
    float valor; scanf("%f", &valor);
    int parcelas, porcentagem, reset;
    float aVista;
    reset = valor;
    aVista = valor - (valor * 20/100);

    printf("Valores da tabela:\n");
    printf("Numero de parcelas    |    Valor total       |    Valor de cada parcela\n");

    for (int i=1; i<=10; i++){
    parcelas = 6;
    porcentagem = 3;
    
    parcelas = parcelas * i;
    porcentagem = porcentagem * i;

    valor += (valor * porcentagem)/100;
    printf("          %d          |         %.2f         |       ", parcelas, valor);
    valor = valor / parcelas;
    printf("%.2f  \n", valor);
    valor = reset;
    }
    
    printf("       A vista        |         %.2f          |", aVista);




    return 0;
}