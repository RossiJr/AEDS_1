#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void testePermutacao(char* palavra1, char* palavra2, int tamanho1, int tamanho2){
    int contador=0, flag=1;
    for(int i=0; i<tamanho1; i++){                                                              //realiza o teste nos caracteres da primeira string
        for(int j=0; j<tamanho2; j++){                                                          //testa o caracter da primeira na segunda
            if(palavra1[i] == palavra2[j] && flag==1){                                      
                contador++;                                                                     //se a palavra aparecer ao menos uma vez o contador sera atualizado em 1
                flag=0;                                                                         //e a flag passara a ser 0 para que nao contabilize o mesmo caracter duas vezes
            }
        }
        flag=1;                                                                                 //"resetara" a flag para que possa testar para outro caracter da string 1
    }

    if(contador == tamanho1)
        printf("\nA primeira palavra e permutacao da segunda.");
    else
        printf("\nA primeira palavra NAO e permutacao da segunda.");
}


int main(){
    char palavra1[51], palavra2[51];
    printf("Insira uma palavra de ate 50 caracteres: ");
    scanf("%s", &palavra1);
    printf("Agora insira outra palavra de ate 50 caracteres: ");
    scanf("%s", &palavra2);
    
    int tamanho1 = strlen(palavra1);
    int tamanho2 = strlen(palavra2);

    testePermutacao(palavra1, palavra2, tamanho1, tamanho2);



    return 0;
}