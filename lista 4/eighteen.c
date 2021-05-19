/* 18.  Um  comerciante  deseja  fazer  o  levantamento  do  lucro  das  mercadorias  que  ele  comercializa.  
Para isto, mandou digitar uma linha para cada mercadoria com o código, preço de compra e preço de venda delas. 
Faça um algoritmo que determine e escreva quantas mercadorias proporcionam lucro < 10%, 10% ≤ lucro ≤ 20% e lucro > 20%. 
Determine também e escreva o valor total de compra e de venda de todas as mercadorias, assim como o lucro total. */

#include <stdio.h>

int main(){
    float precoC, precoV, totalC=0, totalV=0, lucro=0, aux, aux2;
    int lucro1=0, lucro2=0, lucro3=0, qtd, codigo;               //lucro1 -> lucro < 10% | lucro2 -> 10%<=lucro<20% | lucro3 -> lucro>20%

    printf("Insira a quantidade de mercadorias que vai cadastrar: ");
    scanf("%d", &qtd);

    for (int i=1;i<=qtd;i++){
        printf("Insira, respectivamente, o codigo, o preco de compra e o preco de venda da mercadoria %d: ", i);
        scanf("%d %f %f", &codigo, &precoC, &precoV);
        aux = precoV - precoC;                                   //lucro por mercadoria
        aux2 = (100*aux)/precoC;                                 //lucro em porcentagem
        lucro += aux;                                            //lucro total
        totalC += precoC;                                        //preco total de compra
        totalV += precoV;                                        //preco total de venda

        if(aux2 < 10)                                            //contadores
        lucro1++;
        else if((aux2>=10)&&(lucro<20))
        lucro2++;
        else
        lucro3++;
    }

    printf("   Porcentagem      |      Numero   \n");
    printf("   menor que 10%%    |       %d      \n", lucro1);
    printf("   entre 10%% e 20%%  |       %d      \n", lucro2);
    printf("   maior que 20%%    |       %d      \n", lucro3);

    printf("\n");
    
    printf("   Compra   |   Venda   |   Total   \n");
    printf("   %.2f     |   %.2f    |   %.2f   ", totalC, totalV, lucro);
    return 0;
}