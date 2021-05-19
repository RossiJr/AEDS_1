/*9.Faça um programa que pergunte a quantidade de dependentes de um funcionario e calcule o aumento de seu salario.
Se o funcionario nao tiver dependentes o aumaneto será de 5%Caso tenha um ou dois dependentes será de 10%
Caso tenha tres ou quatro dependentes será de 15%Caso contrario, se tiver  mais que quatro dependentes será de 20%
Ler 5 numeros, soma-los e mostrar o maior valor digitado */

#include <stdio.h>

int main(){
    printf("Insira a quantidade de dependentes do fucionario e seu salario, respectivamente: ");
    int dep; float salario = 0; scanf("%d %f", &dep, &salario);

    if(dep == 0)
        salario += salario * 0.05;
    
    else if(dep == 1 || dep == 2)
        salario += salario * 0.1;
    
    else if(dep == 3 || dep == 4)
        salario += salario * 0.15;
    else
    salario += salario * 0.2;

    printf("O novo salario e: R$%.2f.", salario);


    return 0;
}