#include <math.h>
#include <stdio.h>

int main()
{
    int nascimento;
    printf("Insira o ano de nascimento: ");
    scanf("%d", &nascimento);
    
    int ano;
    printf("Insira um ano para saber a idade da pessoa neste ano: ");
    scanf("%d", &ano);
    
    if (ano > nascimento){
        ano -= nascimento;
        
        printf("A idade que esta pessoa terá é: %d", ano);
    }
    else if (ano == nascimento){
        printf("A idade que esta pessoa terá é: 0 anos e alguns meses.");
    }
    else {
        printf("Reinicie um programa e insira um ano maior que a data de nascimento.");
    }
    
    return 0;
}
