#include <stdio.h>

int main () {
    printf("Primeiramente, insira o preco do produto, em reais: ");
    double preco, aumento, imposto; scanf("%lf", &preco);
    printf("Agora insira a categoria do produto(1-> limpeza, 2-> alimentacao, 3-> vestuario) e, logo apos, a situacao(R-> refrigerada, N-> nao refrigerada): ");
    int cat; char situ; scanf("%d &c", &cat, &situ);
    char clas[6] = "      ";
    

    switch (cat) {
        case 1:
        if (preco > 25){
            aumento = preco * 0.12;
        }
        else {
            aumento = preco * 0.05;
        }
        break;

        case 2:
        if (preco > 25){
           aumento = preco * 0.15;
        }
        else {
            aumento = preco * 0.08;
        }
        break;

        case 3:
        if (preco > 25){
            aumento = preco * 0.18;
        }
        else {
           aumento = preco * 0.1;
        }
        break;

        default:
        printf("Codigo invalido");
        return 0;
        break;

    }

printf("O produto teve um aumento de %.2lf reais.\n", aumento);
    
        if (situ == 'R' || cat == 2){
           imposto = preco * 0.05;
        }
        else{
            imposto = preco * 0.08;
        }
    
        printf("O valor a ser pago de imposto sera %.2lf reais.\n", imposto);

        preco += aumento - imposto;
        printf("O novo preco do produto sera %.2lf reais.\n", preco);

        if (preco<=50){
            printf("O novo preco e barato");;
        }
        else if(preco>50 && preco<=120){
            printf("O novo preco e normal");
        }
        else{
            printf("O novo preco e caro");
        }


    return 0;
}