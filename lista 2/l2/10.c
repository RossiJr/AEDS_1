#include <stdio.h>

int main(){
    printf("Insira o o custo de fabrica, em reais, do carro: ");
    double custoF, preco;
    scanf("%lf", &custoF);

    if (custoF <= 12000){
        preco = custoF + (custoF * 0.05);
        printf("O valor final do carro, em reais, e: %.2f", preco);
    }
    else if (custoF > 12000 && custoF <= 25000){
        preco = custoF + (custoF * 0.1) + (custoF * 0.15);
        printf("O valor final do carro, em reias, e: %.2f", preco);
    }
    else{
        preco = custoF + (custoF * 0.15) + (custoF * 0.2);
        printf("O valor final do carro, em reais, e: %.2f", preco);
    }
    return 0;

}