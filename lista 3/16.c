#include <stdio.h>

int main(){
int idade = 1, contador=0;
float media=0;
while(idade != 0){
    printf("Insira sua idade, caso queira finalizar o programa, digite 0: ");
    scanf("%d", &idade);
    if(idade != 0){
    media += idade;
    contador++;
    }
}
media = media/contador;

printf("A media das idades digitadas e: %.1f", media);
return 0;
}
