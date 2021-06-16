#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//flag == 0 -> sem criptografia           flag == 1 -> com criptografia
int flag = 1;                                                                               //controle de quando esta ou nao criptografado

void encrypt(char* string, int tamanho, FILE *arquivo){
        arquivo = fopen("infoCripto.txt", "w");
        int aux;

        if(! arquivo){
            printf("\nErro na abertura do arquivo\n");
        }
        else{
            for(int i=0; i<tamanho; i++){                                                   //criptografia caractere por caractere
                aux = (int)string[i];
                aux = ((((aux*2)-22)*2)-4)/4;                                               //formula de criptografia para cada letra
                fputc(aux, arquivo);
            }

            fclose(arquivo);
            printf("\nArquivo criptografado com sucesso!\n");
            flag = 0;
        }
}
void decrypt(FILE *arquivo){
    char string[200];
    int tamanho, aux;
        arquivo = fopen("infoCripto.txt", "r");
        if(! arquivo){
            printf("\nErro na abertura do arquivo\n");
        }
        else{
            while(!feof(arquivo)){
                fscanf(arquivo, "%s", string);
            }
            tamanho = strlen(string);
            for(int i=0; i<tamanho; i++){                                                   //descriptografia caractere por caractere
                aux = (int)string[i];
                aux = ((((aux*4)+4)/2)+22)/2;                                               //formula para descriptografia
                string[i] = (char)aux;
            }
            printf("\n%s\n", string);
        
        fclose(arquivo);
        flag = 1;
        }


}

int main(){
    FILE * texto;

    char frase[200];
    int opcao, tamanho;
    do{
        system("cls");
        printf("Insira o numero correspondente a acao que deseja realizar:\n1- Encriptografar\t2- Descriptografar\t0- Sair\nOpcao: ");
        scanf("%d", &opcao);
            switch(opcao){
                case 1:
                if(flag == 1){
                    printf("Insira a frase que deseja criptografar, com ate 200 caracteres, sem espacos: ");
                    scanf("%s", &frase);
                    tamanho = strlen(frase);
                    encrypt(frase, tamanho, texto);
                }
                else{
                    printf("\nArquivo ja criptografado!!\nAperte qualquer botao para continuar...");
                    printf("\nAperte qualquer tecla para prosseguir!");
                    getch();
                }
                break;

                case 2:
                    if(flag == 0){
                        decrypt(texto);
                        printf("\nAperte qualquer tecla para prosseguir!");
                        getch();
                    }
                    else{
                        printf("\nArquivo ainda nao foi criptografado!!\nAperte qualquer botao para continuar...");
                        getch();
                    }
                    break;

                case 0:
                printf("\nFinalizando o programa...");
                break;

                default: 
                printf("\nOpcao invalida, insira outra!\nAperte qualquer tecla para continuar...");
                getch();
                break;
            }
    }while(opcao!=0);

    return 0;
}