#include <stdio.h>

int main()
{
    int opc = 0, p1 = 0, p2 = 0, p3 = 0, idade, sexo, contador = 0;
    float porc = 0, media = 0, contadorPorc = 0, contadorTotal = 0;
    while (opc != 4)
    {
        printf("1- Domingao do Faustao\n2- Luciano Hulk\n3- The Voice Brasil\n4- Sair");
        printf("\nEscolha um dos programas supracitados por meio de valores de 1 a 3, ou saia do programa com 4: ");
        scanf("%d", &opc);
        if (opc >= 1 && opc <= 3)                                                   //testa para opc estar dentro do menu
        {
            printf("Agora insira a sua idade: ");
            scanf("%d", &idade);
            if (idade >= 0 && idade <= 150)                                         //testa para que idade esteja dentro do intervalo previamente definido
            {

                printf("Insira seu sexo (1- Feminino, 2- Masculino)\n");
                scanf("%d", &sexo); 
                if (sexo == 1 || sexo == 2)                                         //testa para opcao valida
                {
                    if (opc == 1 && sexo == 1)                  //mulher ; Domingao | acrecenta em 1 o contador
                    {
                        p1++;
                    }
                    else if (opc == 2 && sexo == 1)             //mulher ; Luciano | acrecenta em 1 o contador
                    {
                        p2++;
                    }
                    else if (opc == 3 && sexo == 1)             //mulher ; The Voice | acrecenta em 1 o contador
                    {
                        p3++;
                    }
                    if (opc == 3 && sexo == 2)                  //teste para homem;The Voice | Acrescenta a idade ao valor para futura media e ao contador 1
                    {
                        contador++;
                        media += idade;
                    }
                    if (opc == 1 && (idade >= 18 && idade <= 28))       // teste para intervalo de idade e Domingao
                    {
                        contadorPorc++;
                    }
                    if (opc == 1)                                   //auxiliar para calcular porcentagem do if anterior
                    {
                        contadorTotal++;
                    }
                }
                else
                {
                printf("\nOpcao invalida!\n\n");          //sexo invalido  
                }
            }
            else
            {
                printf("\nOpcao invalida!\n\n");        //idade invalida
            }
        }
        else if (opc != 4)
        {
            printf("\nOpcao invalida!\n\n");            //opcao invalida
        }
    }
    if (contador != 0)
    {
        media /= contador;              //media das idades
    }
    printf("\nA media das idades dos telespectadores homens do The Voice Brasil e: %.2f\n", media);
    if (p1 >= p2 && p1 >= p3)                               //caso domingao tenha maior audiencia feminina
    {
        printf("O programa de TV com o maior numero de votos femininos foi o Domingao do Faustao\n");
    }
    if (p2 > p1 && p2 >= p3)                                //caso o luciano tenha maior audiencia feminina       
    {
        printf("O programa de TV com o maior numero de votos femininos foi o Luciano Hulk\n");
    }
    else                                                    //caso nenhum dos dois seja maior que o the voice
    {
        printf("O programa de TV com o maior numero de votos femininos foi o The Voice Brasil\n");
    }

    if (contadorTotal > 0)
    {
        porc = (contadorPorc / contadorTotal) * 100;        //calculo da porcentagem maior que 0
        printf("A porcentagem de pessoas entre 18 e 28 anos que assistem Domingao do Faustao e: %.2f%%\n", porc);
    }
    else                //porcentagem valendo 0
    {
        printf("A porcentagem de pessoas entre 18 e 28 anos que assistem Domingao do Faustao e: %.2f%%\n", porc);
    }
    return 0;
}