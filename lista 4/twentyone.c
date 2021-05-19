/* 21. Faça um algoritmo para repetir a leitura de uma senha até que ela seja válida. Para cada leitura da senha  incorreta  informada  
escrever  a  mensagem  "SENHA  INVÂLIDA".  Quando  a  senha  for  informada corretamente deve ser impressa a mensagem "ACESSO PERMITIDO" 
e o algoritmo deve  ser encerrado. Considere que a senha correta é o valor 1234. */

#include <stdio.h>

int main(){
    printf("Insira a senha: ");
    int senha; scanf("%d", &senha);

    while(senha != 1234){
        printf("Senha invalida\nInsira a senha novamente: ");
        scanf("%d", &senha);
    }
    printf("Acesso permitido!");

    return 0;
}