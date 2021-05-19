/*Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opi-
nião de quinze espectadores, calcule e mostre:

■ a média das idades das pessoas que responderam ótimo;
■ a quantidade de pessoas que responderam regular; e
■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados.*/

#include <stdio.h>

int main(){
float idade=0, op=0, mediaI=0, bom=0, denominador=0;
int qtd=0;
printf("3 -- Otimo\n2 -- Bom\n1 -- Regular\n---x--x---\n");
for (int i=1;i<=15;i++){
    printf("Insira sua idade e sua opiniao de acordo com a tabela anterior: ");
    scanf("%f %f", &idade, &op);
    if (op == 3){
        mediaI += idade;
        denominador++;
    }
    if(op == 1){
        qtd++;
    }
    if(op == 2){
        bom++;
    }
}
mediaI = mediaI/denominador;
bom = bom/15*100;

printf("A media da idade das pessoas que responderam ""otimo"" e: %.1f\n", mediaI);
printf("A quantidade de pessoas que responderam regular e: %d\n", qtd);
printf("A porcentagem de pessoas que responderam bom e: %.1f%%", bom);




    return 0;
}