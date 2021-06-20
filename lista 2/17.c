// Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
// programa deve mostrar uma mensagem de permissão de acesso ou não.

#include <stdio.h>

int main()
{
    //Input de dados
    printf("Insira sua senha: ");
    int senha;
    scanf("%d", &senha);

    //Processamento e Output de dados
    if (senha == 4321)
    {
        printf("Acesso permitido");
    }
    else
    {
        printf("Acesso negado");
    }

    return 0;
}