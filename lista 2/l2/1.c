#include <stdio.h>

int main(){
    printf("Insira quatro valores: ");
    float a;
    float b;
    float c;
    float d;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    double media = (a+b+c+d)/4;

    printf("A media e: %.1f\n", media);

    if (media>=7){
        printf("Aluno aprovado!");
    }
    else{
        printf("Aluno reprovado!");
    }

    return 0;
}