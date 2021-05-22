#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void espacosIniciais(char* frase, int tamanho){
    int aux=0, contador=0;
    
    while(frase[aux]==' '){
        if(frase[aux]==' '){
            contador++;                                                             //calcula onde comeca os caracteres diferentes de ' '
        }
        ++aux;
    }

    char* novaString = (char *)calloc(tamanho, sizeof(char));
    strcpy(novaString, &frase[contador]);                                           //"corta" a string
    strcpy(&frase[0], novaString);                                                  //passa o valor recortado para a string original
}
void espacosFinais(char* frase, int tamanho){
    int contador=0, aux=tamanho-2;
    char* novaString = (char *)calloc(tamanho, sizeof(char));

    while(frase[aux]==' '){
        if(frase[aux]==' '){                                                        //calcula os espacos sobrando no final
            contador++;
        }
        aux--;
    }

    tamanho -= contador;                                                            //tamanho da string sem os espacos

    strncpy(novaString, frase, tamanho);                                            //corta e passa o valor recortado para a outra string
    strcpy(frase, novaString);
}
void impSemEspCentr(char* frase, int tamanho){
    for(int i=0; i<tamanho; i++){
        if((frase[i]==frase[i+1])&&(frase[i]==' ')){}                               //toda vez que houver um espaco(i) e o proximo caracter(i+1) for um espaco, o programa nao 
        else{                                                                       //imprimira o espaco(i) e testara o proximo caracter para a mesma condicao
            printf("%c", frase[i]); 
        }
    }
}


int main(){
    printf("Insira uma frase de ate 200 caracteres: ");
    char frase[200]; fgets(frase, sizeof(frase), stdin);

    int tamanho = strlen(frase);

    espacosIniciais(frase, tamanho);
    tamanho = strlen(frase);                                                        //atualiza o tamanho da frase
    espacosFinais(frase, tamanho);
    tamanho = strlen(frase);
    impSemEspCentr(frase, tamanho);

    return 0;
}