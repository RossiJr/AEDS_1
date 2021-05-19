/*Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo pro-
duto lançado. Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não). Sabe-se

que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre:
■ o número de pessoas que responderam sim;
■ o número de pessoas que responderam não;
■ o número de mulheres que responderam sim; e
■ a percentagem de homens que responderam não, entre todos os homens analisados.*/

#include <stdio.h>

int main (){
char sexo, op;
int contadorOPS=0, contadorOPN=0, contadorFS=0, contadorX=0;
float contadorMN=0;

for(int i=1;i<=10;i++){
printf("Insira seu sexo(M/F) e sua opiniao(S/N)");
scanf("%s", &sexo);
scanf("%s", &op);

if(op == 'S'){
    contadorOPS++;
}
if(op == 'N'){
    contadorOPN++;
}
if((op=='S')&&(sexo=='F')){
    contadorFS++;
}
if((op=='N')&&(sexo=='M')){
    contadorMN++;
}
contadorX++;
if(contadorX == 10){
    i = 11;
}
}
contadorMN = contadorMN*10;

printf("O numero de pessoas que responderam sim: %d\n", contadorOPS);
printf("O numero de pessoas que responderam nao: %d\n", contadorOPN);
printf("O numero de mulheres que responderam sim: %d\n", contadorFS);
printf("A porcentagem de homens que responderam nao: %.1f\n", contadorMN);

    return 0;
}