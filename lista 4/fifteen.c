/* 15. Faça um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de 0.  
Para  cada  número  fornecido,  imprimir  se  ele  é  NEGATIVO  ou  POSITIVO.  
Quando  o  número  0  for fornecido   a   repetição   deve   ser   encerrada   sem   imprimir   mensagem   alguma.   
Use   a   estrutura FAÇA/ENQUANTO */

#include <stdio.h>

int main(){                                             //inicio
float n;
do{
    printf("Numero: ");
    scanf("%f", &n);
    if(n == 0){}                                          //encerrar programa
    else if (n > 0)                                     //teste negatico
    printf("Positivo.\n--x-x--\n");
    else                                                //teste negativo
    printf("Negativo.\n--x-x--\n");
} while(n!=0);                                          //laco de repeticao


    return 0;                                           //fim
}