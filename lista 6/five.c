/* 5-Calcular e retornar a soma e o produto(faça funções separadas)dos dígitos de um número inteiro informado pelo usuário. */

#include <stdio.h>

int digito(int* numero, int divisor){
    int aux = (*numero);
    (*numero) %= divisor;
    int digit = (aux - (*numero))/divisor;

    return digit;
}

int soma(int um, int dois, int tres, int quatro){
    int soma = um+dois+tres+quatro;
    
    return soma;
}
int produto(int um, int dois, int tres, int quatro){
    int produto = um*dois*tres*quatro;

    return produto;
}

int main(){
    printf("Insira um numero inteiro de 2 a 4 digitos: ");
    int numero, d1, d2, d3, d4; scanf("%d", &numero);
    if (numero >= 1000 && numero<10000){
        d1 = digito(&numero, 1000);
    }
    if (numero >= 100 && numero<1000){
        d2 = digito(&numero, 100);
    }
    if (numero >= 10 && numero<100){
        d3 = digito(&numero, 10);
    }
    if (numero >=0 && numero < 10){
        d4 = numero;
    }

    printf("%d %d %d %d\n", d1, d2, d3, d4);

    printf("A soma destes digitos e: %d\n", soma(d1, d2, d3, d4));

    if(d1 == 0){
        d1 = 1;
    }
    if(d2 == 0){
        d2 = 1;
    }
    if(d3 == 0){
        d3 = 1;
    }
    if(d4 == 0){
        d4 = 1;
    }

    printf("O produto destes algarismos e: %d", produto(d1, d2, d3, d4));


    return 0;
}