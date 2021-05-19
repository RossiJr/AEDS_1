#include <stdio.h>
#include <conio.h>

int main()
{

    float one, two, media, diferenca, produto, divisao;
    int opc, opc2;
    int n, n2;
    n = 0;

    while (n < 1)
    {
        n = 0;
        n2 = 0;
        printf("Insira dois numeros: ");
        scanf("%f %f", &one, &two);
        printf("----x--x----\n");
        while (n2 < 1)
        {
            printf("----x--x----\n");
            printf("Insira o numero da operacao:\n 1: Media dos numeros.   ----   2: Diferenca do maior pelo menor.\n 3: Produto entre os numeros.   ----   4: Divisao do primeiro pelo segundo.\n");

            scanf("%d", &opc);
            switch (opc)
            {
            case 1:
                media = (one + two) / 2;
                printf("----x--x----\n");
                printf("A media e: %.1f\n", media);
                printf("----x--x----\n");
                printf("Caso deseje fazer outra operacao com os mesmos valores, digite 1.\n Caso deseje fazer outra operacao com outros valores, digite 2.\n Caso deseje encerrar o programa, digite 3.\n");
                scanf("%d", &opc2);
                switch (opc2)
                {
                case 1:
                    n2 = 0;
                    break;
                case 2:
                    n2 = 1;
                    break;
                case 3:
                    n = 1;
                    n2 = 1;
                    break;
                default:
                    n = 1;
                    n2 = 1;
                    break;
                }
                break;

                            //****************ARRUMAR 2*******************//
            case 2:
                if (one > two)
                {
                    if (one >= two) {
                        diferenca = one - two; 
                    }
                    else {
                        diferenca = two - one;
                    }
                    printf("----x--x----\n");
                    printf("A diferenca entre o maior e o menor e: %.1f\n", diferenca);
                }
                else
                {
                    diferenca = two / one;
                    printf("----x--x----\n");
                    printf("A diferenca entre o maior e o menor e: %.1f\n", diferenca);
                }
                printf("----x--x----\n");
                printf("Caso deseje fazer outra operacao com os mesmos valores, digite 1.\nCaso deseje fazer outra operacao com outros valores, digite 2.\nCaso deseje encerrar o programa, digite 3.\n");
                scanf("%d", &opc2);
                switch (opc2)
                {
                case 1:
                    n2 = 0;
                    break;
                case 2:
                    n2 = 1;
                    break;
                case 3:
                    n = 1;
                    n2 = 1;
                    break;
                default:
                    n = 1;
                    n2 = 1;
                    break;
                }
                break;

            case 3:
                produto = one * two;
                printf("----x--x----\n");
                printf("O valor do produto dos numeros e: %.1f\n", produto);
                printf("----x--x----\n");
                printf("Caso deseje fazer outra operacao com os mesmos valores, digite 1.\nCaso deseje fazer outra operacao com outros valores, digite 2.\nCaso deseje encerrar o programa, digite 3.\n");
                scanf("%d", &opc2);
                switch (opc2)
                {
                case 1:
                    n2 = 0;
                    break;
                case 2:
                    n2 = 1;
                    break;
                case 3:
                    n = 1;
                    n2 = 1;
                    break;
                default:
                    n = 1;
                    n2 = 1;
                    break;
                }
                break;

            case 4:
                divisao = one / two;
                printf("----x--x----\n");
                printf("A divisao do primeiro pelo segunda resulta em %.1f\n", divisao);
                printf("----x--x----\n");
                printf("Caso deseje fazer outra operacao com os mesmos valores, digite 1.\nCaso deseje fazer outra operacao com outros valores, digite 2.\nCaso deseje encerrar o programa, digite 3.\n");
                scanf("%d", &opc2);
                switch (opc2)
                {
                case 1:
                    n2 = 0;
                    break;
                case 2:
                    n2 = 1;
                    break;
                case 3:
                    n = 1;
                    n2 = 1;
                    break;
                default:
                    n = 1;
                    n2 = 1;
                    break;
                }
                break;
            default:
                printf("----x--x----\n");
                printf("Opcao invalida\n");
                printf("----x--x----\n\n");
            }
        }
    }
    printf("***Programa encerrado, aperte QUALQUER TECLA para prosseguir!***");
    getch();

    return 0;
}
