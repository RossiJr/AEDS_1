/*Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa
não entrava na pesquisa. Faça um programa que:

■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam as-
sistindo); e

■ calcule e mostre a porcentagem de audiência de cada canal.*/

#include <stdio.h>

int main(){
    
    float canal4=0, canal5=0, canal7=0, canal12=0, canal=1, audiencia=0, total=0;
     while(canal != 0){
         printf("Insira o numero do canal e quantas pessoas estao assistindo(para finalizar o programa, digite 0 0): ");
         scanf("%f %f", &canal, &audiencia);
         if(canal == 4){
             canal4 += audiencia;
         }
         else if(canal == 5){
             canal5+= audiencia;
         }
         else if (canal == 7){
             canal7+= audiencia;
         }
         else if (canal == 12){
             canal12+= audiencia;
         }
         else if(canal == 0){
             canal = 0;
         }
     }
    total = canal4 + canal12 + canal5 + canal7;
    canal4 = canal4/total*100;
    canal5 = canal5/total*100;
    canal7 = canal7/total*100;
    canal12 = canal12/total*100;

printf("---x--x---");
    printf("Canal:                       12  |  07  |  05  |  04  \n");
    printf("Porcentagem de Audiencia:    %.0f  |  %.0f  |  %.0f  |  %.0f  ", canal12, canal7, canal5, canal4);
    return 0;
}