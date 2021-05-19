#include <stdio.h>
#include <math.h>

int main(){
    int opc;
    double a, b, produto, raiz2, raiz3;

    printf("Insira dois numeros: ");
    scanf("%lf %lf", &a, &b);
    printf("---x--x---\n");
    printf("- Insira uma das opcoes a seguir:\n1: O primeiro elevado ao segundo.   ---   3: Raiz cubica de cada um dos numeros.\n2: Raiz quadrada de cada um dos numeros.\n");
    scanf("%d", &opc);
    printf("---x--x---\n");
    switch (opc){
        case 1:
        produto = pow(a, b);
        printf("O resultado do primeiro elevado ao segundo e: %.1lf\n", produto);
        printf("---x--x---\n");
        break;

        case 2:
        raiz2 = sqrt(a);
        printf("A raiz quadrada do primeiro e %.1lf", raiz2);
        raiz2 = sqrt(b);
        printf("e a do segundo e %.1lf\n", raiz2);
        printf("---x--x---\n");
        break;    

        case 3:
        raiz3 = pow(a, 1/3);
        printf("A raiz cubica do primeiro e %.1lf", raiz3);
        raiz3 = pow(b, 1/3);
        printf("e a do segundo e %.1lf\n", raiz3);
        printf("---x--x---\n");
        break;

        default:
        printf("Error, reinicie o programa e insira outra opcao!\n");
        printf("---x--x---\n");
    }


    return 0;
}