/* 7. Faça um algoritmo que receba diversos pares de números A e B entrados pelo usuário, e determine a soma dos cubos de todos 
os números pares inteiros compreendidos no intervalo entre B e A. Retorne o intervalo pesquisado e o valor da soma calculada. 
a entrada de dados deverá ser interrompida quando A e B forem iguais a zero */

#include <stdio.h>
#include <math.h>

int main(){
int a=1, b=1, soma=0;
while(a!=0 && b!=0){
printf("Insira dois valores: ");
scanf("%d %d", &a, &b);
if(a!=0 && b!=0){                                           //testa para finalizar programa
if (a>b){
    for(int i=b;i<=a;i++){                                  //percorre todo o intervalo de a b, sendo a maior que b
        if (i%2 == 0){                                      //testa para par
            soma += pow(i, 3);                              //calcula o cubo e acrescenta a soma
        }
    }
}
else if(b>a){                                               //percorre todo o intervalo de a b, sendo a menor que b
    for(int i=a;i<=b;i++){
        if (i%2 == 0){
            soma+=pow(i, 3);
        }
    }
}
else{                                                       //testa para valores iguais
    if(a%2 == 0){
        soma+=pow(a, 3);
    }
}
}
}
printf("O valor da soma e: %d", soma);



    return 0;
}