/* Calcular e retornar (uma função para cada) as seguintes conversões de um valor 𝑛informado pelo usuário:  
Polegada  para  centímetros;  Centímetros  para  polegadas  (1  polegada  =  2,54  cm); Fahrenheit para Celsius; e Celsius para Fahrenheit 
(𝐶º=(𝐹º−32)/1,8e 𝐹º=(𝐶º∗1,8)+32). */

#include <stdio.h>

void menu(){
    printf("\nInsira o numero correspondente a conversao que voce deseja:\n1- Polegada para Centimetro\n2- Centimetros para polegadas\n3- Fahrenheit para Celsius\n4- Celsius para Fahrenheit\n0- Sair\n");
}
void resposta(){
    printf("\nO valor final e: ");
}

float polCel(float polegadas){
    polegadas*=2.54;

    return polegadas;
}
float celPol(float centimetros){
    centimetros/=2.54;

    return centimetros;
}
float fahrenheitCelsius(float fahrenheit){
    fahrenheit = (fahrenheit - 32)/1.8;
    
    return fahrenheit;
}
float celsiusFahrenheit(float celsius){
    celsius = (celsius*1.8)+32;

    return celsius;
}


int main(){
    int opc;
    float valor;
    do{
    menu();
    scanf("%d", &opc);
    switch (opc){
        case 1:
        printf("Insira o valor em polegadas: ");
        scanf("%f", &valor);
        valor = polCel(valor);
        resposta(); printf("%.2f\n", valor);
        break;

        case 2:
        printf("Insira o valor em centimetros: ");
        scanf("%f", &valor);
        valor = celPol(valor);
        resposta(); printf("%.2f\n", valor);
        break;

        case 3:
        printf("Insira o valor em graus Fahrenheit: ");
        scanf("%f", &valor);
        valor = fahrenheitCelsius(valor);
        resposta(); printf("%.2f\n", valor);
        break;

        case 4:
        printf("Insira o valor em graus Celsius: ");
        scanf("%f", &valor);
        valor = celsiusFahrenheit(valor);
        resposta(); printf("%.2f\n", valor);
        break;

        default:
        printf("Programa encerrando...\nPrograma encerrado.");
    }
        } while(opc !=0);
        return 0;
    }