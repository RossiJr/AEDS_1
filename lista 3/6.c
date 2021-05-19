#include <stdio.h>

int main(){
char cod;
float valor, aVista, total;
float prazo = 0;

for (int i=0;i<15;i++){
    printf("Insira o codigo da transacao: ");
    scanf("%s", &cod);
    printf("Insira o valor da transacao: ");
    scanf("%f", &valor);

    if (cod == 'V'){
        aVista += valor;
        }
    else if(cod == 'P'){
        prazo += valor;
    }
}

printf("\nO valor total das compras a vista e %.1f\n", aVista);
printf("O valor total das compras a prazo e %.1f\n", prazo);

total = aVista + prazo;
printf("\nO valor total das compras a vista e a prazo e: %.1f\n", total);

    prazo = prazo / 3;
printf("\nO valor da primeira parcela do total das compras a prazo e: %.1f", prazo);


    return 0;
}