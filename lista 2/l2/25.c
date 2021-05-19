#include <stdio.h>

int main(){
double horasE, horasF, H, premio;
printf("Insira o numero de horas extras que o funcionario realizou: ");
scanf("%lf", &horasE);
printf("Agora, insira o numero de horas faltas: ");
scanf("%lf", &horasF);

horasE = horasE * 60;
horasF = horasF * 60;

H = horasE - (2/3 * (horasF));

if (H >= 2400){
    premio = 500;
}
else if (H>1800 && H<2400){
    premio = 400;
}
else if (H>=1200 && H<1800){
    premio = 300;
}
else if (H>=600 && H<1200){
    premio = 200;
}
else {
    premio = 100;
}

printf("O premio que este funcionario vai receber e: R$%.2lf", premio);



    return 0;
}