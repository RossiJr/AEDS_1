/* Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal
o seu volume: v = 4/3 * R3 */

#include <stdio.h>
#include <math.h>

float volume(float raio){
    float PI = 3.14;
    float vol= (4*PI*pow(raio,3))/3;

    return vol;
}

int main(){
    printf("Insira o raio da esfera: ");
    float raio; scanf("%f", &raio);

    printf("O volume e igual a %.2f", volume(raio));

    return 0;
}