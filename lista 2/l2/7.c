#include <stdio.h>

int main (){

    printf("Insira o salario do funcionario: ");
    double salario; 
    scanf("%lf", &salario);
    if(salario >= 500){
        printf("Voce nao recebera um aumento!");
    }
    else{
        double novoSalario = salario + (salario * 30/100);
        printf("Seu salario agora e: %.2lf", novoSalario);
    }



    return 0;
}