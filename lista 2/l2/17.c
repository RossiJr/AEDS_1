#include <stdio.h>

int main(){
    printf("Insira sua senha: ");
    int senha; scanf("%d", &senha);

    if (senha == 4321){
        printf("Acesso permitido");
    }
    else {
        printf("Acesso negado");
    }

    return 0;
}