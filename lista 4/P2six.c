#include <stdio.h>
#include <math.h>

int main(){
int coordX1=1, coordX2=1, coordY1=1, coordY2=1, distancia, aux, aux2;
while(coordX1!=0 && coordX2!=0 && coordY1!=0 && coordY2){
printf("\nInsira a primeira coordenada (X Y; ou caso queira encerrar, digite 0 0): ");
scanf("%d %d", &coordX1, &coordY1);
printf("Insira a segunda coordenada(X Y; ou caso queira encerrar, digite 0 0): ");
scanf("%d %d", &coordX2, &coordY2);

    if (coordX1!=0 && coordX2!=0 && coordY1!=0 && coordY2){                                     //teste para ver se o programa sera encerrado
aux=coordX2-coordX1;                                                                            //calculo da primeira parte da equacao
aux2=coordY2-coordY1;                                                                           //calculo da segunda parte da equacao  
distancia = pow(aux, 2) + pow(aux2, 2);                                                         //calculo do terceiro passo da equacao

printf("O valor da distancia dos dois pontos e: %d\n", distancia);
    }
}
    return 0;
}