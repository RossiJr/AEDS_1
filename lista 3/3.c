#include <stdio.h>

int main(){
    int vect[7], idade; 
    int pessoas1 = 0;
    int pessoas2 = 0;
    int pessoas3 = 0;
    int pessoas4 = 0;
    int pessoas5 = 0;

    printf("Insira a idade das oito pessoas: ");
    for(int i=0;i<8;i++){
        scanf("%d", &vect[i]);
        if(vect[i]<=15){
            pessoas1+=1;
        }
        else if(vect[i]>=16 && vect[i]<=30){
            pessoas2+=1;
        }
        else if(vect[i]>=31 && vect[i]<=45){
            pessoas3+=1;
        }
        else if(vect[i]>=45 && vect[i]<=60){
            pessoas4+=1;
        }
        else if(vect[i]>60){
            pessoas5+=1;
    }
}

printf("A quantidade de pessoas na primeira faixa etaria e: %d\n", pessoas1);
printf("A quantidade de pessoas na segunda faixa etaria e: %d\n", pessoas2);
printf("A quantidade de pessoas na terceira faixa etaria e: %d\n", pessoas3);
printf("A quantidade de pessoas na quarta faixa etaria e: %d\n", pessoas4);
printf("A quantidade de pessoas na quinta faixa etaria e: %d\n", pessoas5);

float total = pessoas1 + pessoas2 + pessoas3 + pessoas4 + pessoas5;
float porcentagem1 = (pessoas1 / total)*100;
printf("A porcentagem de pessoas da primeira faixa etaria e %.1f%%\n", porcentagem1);

float porcentagem2 = (pessoas5 / (total))*100;
printf("A porcentagem de pessoas da ultima faixa etaria e %.1f%%\n", porcentagem2);

    return 0;
}
