/* Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne a soma dos divisores
desse valor. */

#include <stdio.h>

int somaDiv(int valor){
    int soma=0;
    for(int i=1;i<=valor;i++){
        if((valor%i)==0){
            soma+=i;
        }
    }
    return soma;
}

int main(){
printf("Insira um valor inteiro e positivo: ");
int valor; scanf("%d", &valor);
if (valor>0){
    printf("A soma dos divisores deste numero e: %d", somaDiv(valor));
}
else if(valor == 0){
    printf("Por convencao, nao existe a divisao por 0");
}
else{
    printf("O valor precisa ser positivo");
}
    return 0;
}