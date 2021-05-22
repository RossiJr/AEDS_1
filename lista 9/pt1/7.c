#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numCaracIguais(char *frase, int tamanho){
    int repetidos=0;
    for(int i=0; i<tamanho; i++){
        for(int j=i+1; j<tamanho; j++){
            if(frase[i] == frase[j] && i!=j){                                       //conta o numero de caracteres repetidos
                repetidos++;
                break;
            }
        }
    }

    return repetidos;
}
int numEspacos(char* frase, int tamanho){
    int espacos=0;
    for(int i=0; i<tamanho; i++){                                                   //conta o numero de espacos
        if(frase[i]==' '){
            ++espacos;
        }
    }

    return espacos;
}
int main(){
    printf("Insira uma frase de ate 200 caracteres: ");
    char frase[200]; 
    fgets(frase, sizeof(frase), stdin);
    int tamanho = strlen(frase);

    int repetidos = numCaracIguais(frase, tamanho);
    int espacos = numEspacos(frase, tamanho);

    int total = (tamanho - espacos) - (repetidos);                                  //subtrai do total o numero de caracteres repetidos e o numero de espacos
    
    printf("O numero total de caracteres diferentes e: %d", total);

    return 0;
}