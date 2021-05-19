#include <stdio.h>

int main (){
    printf("----x--x----\n");
    printf(" Insira qual tipo de investimento deseja realizar:\n1: Poupança, com um rendimento mensal de 3%%.\n2: Fundos de renda fixa, com um rendimento mensal de 4%%.");
    int opc; scanf("%d", &opc);
    printf("----x--x----\n");
    printf("Agora insira o valor: ");
    double valor; scanf("%lf", &valor);
    switch (opc){
        case 1:
    valor += valor * 0.03;
    printf("Valor corrigido apos um mes: %.2lf", valor);
    break;

        case 2:
    valor += valor * 0.04;
    printf("Valor corrigido apos um mes: %.2lf", valor);
    break;
    
    default:
    printf("Reinicie o programa, valor invalido");
    }

    

    return 0;
}