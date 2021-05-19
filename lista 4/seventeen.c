/* 17.  Faça  um  algoritmo  para  ler  uma  quantidade indeterminada  de  valores  inteiros.  
Para  cada  valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. 
O algoritmo será encerrado imediatamente após a leitura de um valor NULO (zero) ou NEGATIVO. */

#include <stdio.h>

int main(){                                                             //inicio
printf("Insira um valor: ");
int valor=1; scanf("%d", &valor);

while (valor>0){
    if(valor%2 ==0){                                                    //teste par
    printf("Par\n--x-x--\n");
    }                                                 
    else{                                                                //teste impar
    printf("Impar\n--x-x--\n");                                     
    }
    printf("Insira um valor: ");
    scanf("%d", &valor);
}

    return 0;                                                           //fim
}