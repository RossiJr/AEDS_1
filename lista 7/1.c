#include <stdio.h>
#include <conio.h>

int pot(int x, int y){
    if (y > 1)
    x = x * pot(x, y-1);

    if(y==1)
    return x;
}
int fat(int x){
    if(x==0)
    return 1;

    if(x>1)
    x*=fat(x-1);

    if (x==1)
    return x;
}
int fiboN(int n, int a, int b){
    int aux;
    if(n == 0)
    return 0;

    if (n > 1){
        aux = a + b;
        a = b;
        b = aux;
        return fiboN(n-1, a, b);
    }
    if (n == 1)
        return b;
}
int somaDosDigitos(int x){
    int aux=0, aux2;

    if(x>=1000 && x<10000){
        aux2= x / 1000;
        aux+=(int)aux2;
        x%=1000;
    }
    if(x>=100 && x<1000){
        aux2=x/100;
        aux+=(int)aux2;
        x%=100;
    }
    if(x>=10 && x<100){
        aux2=x/10;
        aux+=(int)aux2;
        x%=10;
    }
    if (x>=0 && x<=9)
        aux+=x;

    aux2 = 0;

    if(x>=10)
    return somaDosDigitos(x);
    if (x<10)
    return aux;
}
int somaAteN(int x, int aux){
    if (x==1)
    return aux;
    
    if(x>1){
        aux+=x;
        return somaAteN(x-1, aux);
    }
}
int mdc(int x, int y){
    int aux;
    if(x>=y){
        aux = x%y;
        x = y;
        y = aux;
        if(y!=0)
        return mdc(x, y);

        if(y==0)
        return x;

    }
    else{
        aux = y%x;
        y=x;
        x = aux;
        if(x!=0)
        return mdc(x, y);

        if(x==0)
        return y;
    }
}
float sequenciaUm(int n, float aux){
    aux+=(1/(float)n);
    if(n>2){
    return sequenciaUm(n-1, aux);
    }
    else{
    return aux;
    }
}
int sequenciaDois(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else if((n%2)>0){
        return 2*sequenciaDois(n-1) + 3*sequenciaDois(n-2);
    }
}




int main(){
    int opc, x, y, a=1, b=1;
    int aux2;
    float aux=0;
do{
    printf("\nInsira o numero da operacao deseja realizar: \n1- Numero X elevado a Y\n2- Fatorial de X\n3- 'n' primeiros termos da sequencia de Fibonacci\n4- Calculo dos digitos de um numero\n5- Soma dos numero de 1 ate 'n'\n6- Calcular o MDC de dois numeros\n7- Elementos da sequencia previamente mostrada\n8- Funcao recursiva previamente exposta\n0- Encerrar o programa\n");
    scanf("%d", &opc);
    switch (opc){
        case 1: 
        printf("Insira o valor da base e do expoente, respectivamente: ");
        scanf("%d %d", &x, &y);
        printf("%d\n", pot(x, y));
        break;

        case 2:
        printf("Insira o valor de X: ");
        scanf("%d", &x);
        printf("%d", fat(x));
        break;

        case 3:
        printf("Insira o valor de quantos termos deseja: ");
        scanf("%d", &x);
        printf("O valor do termo %d e: %d", x, fiboN(x, a, b));
        break;

        case 4:
        printf("Insira um numero ate 9999: ");
        scanf("%d", &x);
        printf("O valor da soma dos digitos e: %d", somaDosDigitos(x));
        break;

        case 5:
        printf("Insira o numero n: ");
        scanf("%d", &x);
        printf("O valor da soma e: %d", somaAteN(x, a));

        case 6:
        printf("Insira dois numeros: ");
        scanf("%d %d", &x, &y);
        printf("O MDC de %d e %d e: %d", x, y, mdc(x, y));
        break;

        case 7:
        printf("Insira o valor de n: ");
        scanf("%d", &x);
        printf("O valor dessa sequencia e: %.3f", sequenciaUm(x, aux));
        break;

        case 8:
        printf("Insira o valor de n: ");
        scanf("%d", &x);
        printf("O valor e %d", sequenciaDois(x));
        break;
        
        case 0:
        break;

        default:
        printf("Opcao invalida, insira outra...");
        break;
    }
    if(opc!=0){
        printf("\n\nAperte qualquer tecla para prosseguir...\n");
        getch();
    }
}while (opc != 0);

printf("\nPrograma sendo encerrado...\n");

}