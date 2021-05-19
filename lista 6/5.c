/* A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o
número de filhos. Faça uma sub-rotina que leia esses dados para um número não determinado de pessoas
e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual
de pessoas com salário inferior a R$ 380,00. */

#include <stdio.h>

void texto(int opc){
    switch (opc)
    {
    case 1:
        printf("Insira o salario e o numero de filhos: ");
        break;

    case 2:
        printf("Para encerrar o programa, digite 0, para prosseguir 1: ");
        break;
    
    default:
        break;
    }
}

void mediaSal(float salario, int total){
salario/=total;
printf("A media salarial e: %.2f\n", salario);
}
void mediaF(int filhos, int contador){
    filhos/=contador;
    printf("A media do numero de filhos e: %.2f\n", filhos);
}
void percentualS(int percentual, int contador){
    percentual = (percentual*100)/contador;

    printf("A porcentagem de pessoas com renda inferior a R$380,00 e: %.2f%%\n", percentual);
}

int main(){
    float salario, mediaFilhos, maiorSalario, aux=0, contador=0, percentual=0;
    int filhos, opc;
    do{
    texto(1); scanf("%f %d", &salario, &filhos);

    aux+=salario;
    contador++;
    mediaFilhos+=filhos;
    if(salario < 380){
            percentual++;
        }

    if(salario >= maiorSalario)
        maiorSalario=salario;    
    texto(2); scanf("%d", &opc);
    }while(opc!=0);



    mediaSal(aux, contador);
    mediaF(mediaFilhos, contador);
    percentualS(percentual, contador);
    printf("\nO maior salario e: R$%.2f", maiorSalario);
    
return 0;
}
