/* 20. Faça um  algoritmo para ler dois valores inteiros e imprimir o resultado da divisão do primeiro pelosegundo. 
Se o segundo valor informadofor ZERO, deve ser impressa uma mensagem de VALOR INVÂLIDO e deverá ser lido um novo valor. 
Ao final do programa deve ser impressa a seguinte mensagem: VOCE DESEJA  OUTRO  CÁLCULO  (S/N)?.  Se  a  resposta  for  S  o  programa  
deverá  retornar  ao  começo,  caso contrário deverá encerrar a sua execução imprimindo quantos cálculos foram feitos.
OBS: O programa só deverá aceitar com a resposta para a pergunta as letras S ou N. */

#include <stdio.h>

int main(){
char opc = 'S';
float a, c1=0; 
int b; 
while(opc == 'S'){
    printf("Insira dois valores inteiros: ");
    scanf("%f %d", &a, &b);
    if(b == 0){                                                             //testa se e invalido
    printf("Valor invalido\n");
    }
    else{
        printf("O valor de %.0f ", a);
        a/=b;                                                               //operacao de a / b
        printf("dividido por %d e, aproximadamente, %.1f.\n", b, a);
        c1++;                                                               //contador de qtd de calculos
    }
    printf("Deseja fazer outra operacao? (S/N): ");
    scanf("%s", &opc);
}

printf("O numero de operacoes feitas foram: %.0f", c1);

    return 0;
}