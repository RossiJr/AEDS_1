/* Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt − 58; para mulheres: peso
ideal = 62.1 *alt − 44.7. */

#include <stdio.h>

float pesoIdeal(float altura, char sexo){
float ideal;
if(sexo == 'H'){
    ideal = (72.7 * altura) - 58;                       //formula homem
}
else if(sexo == 'M'){
    ideal = (62.1*altura)-44.7;                         //formula mulher
}
    return ideal;
}

int main(){
    printf("Insira a altura e o sexo(Homeme - H | Mulher - M), respectivamente: ");
    float altura; char sexo; scanf("%f %c", &altura, &sexo);
    printf("O peso ideal e: %.2f", pesoIdeal(altura, sexo));

    return 0;
}