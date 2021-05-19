/*7.Crie um programa que simula uma máquina de cartão bancário. O usuário terá inicialmenteR$ 1000,00, e ao tentar fazer uma compra 
em um valor superior a R$ 1000,00, o seu programadeverá retornar “saldo insuficiente”. Se o valor da compra for menor 
do que o conteúdo inicialda conta, o programa deveinformar que a compra ocorreu corretamente, e retornar o valor do saldo atual. */


#include <stdio.h>

int main (){
    float saldo = 1000, compra=0;
    printf("Insira o valor da compra, em reais: ");
    scanf("%f", &compra);

    if(compra > 1000){
        compra -= saldo;
        printf("Saldo insuficiente, para realizar essa compra voce precisa de mais R$%.2f.\n", compra);
    }
    else{
        saldo -= compra;
        printf("Sua compra foi um sucesso! Agora, voce dispoe de R$%.2f.", saldo);
    }


    return 0;
}
