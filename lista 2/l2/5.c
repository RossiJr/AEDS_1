#include <stdio.h>

int main() {
    printf("Digite dois numeros: ");
    double x, y;
    scanf("%lf %lf", &x, &y);

    printf("Agora, Insira 1 para adquirir a media entre os dois numeros.\nCaso queira a diferenca do maior para o menor, insira dois.\nOu insira 3 para obter o produto dos numeros.\nE por fim, 4 se quiser adquirir a divisao do primeiro pelo segundo.\n");
    int opc; scanf("%d", &opc);
    double media, div, produto, dif;
    switch (opc){
        case 1:
            media = (x+y)/2;
            printf("A media e: %.1lf", media);
            break;
        
        case 2:
            if (x>y){
                dif = x - y;
                printf("A diferenca e: %.1lf", dif);
            }
            else{
                dif;
                dif = x - y;
                printf("A diferenca e: %.1lf", dif);
            }
        break;
        
        case 3:
        produto = x * y;
        printf("O produto e: %lf", produto);
        break;

        case 4:
            div = x/y;
            printf("O resultado da divisao do primero pelo segundo: %lf", div);
        break;
        
        default:
        printf("Numero invalido, reinicie o programa e insira outro numero.");
        break;
    }


    return 0;
}