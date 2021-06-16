#include "vetor.h"
#include <cstdlib>
#include <iostream>
using namespace std;


Vetor::Vetor(){
    v = new int [TAMANHO];
    for(int i=0; i<TAMANHO; i++){
        v[i] = 0;
    }

    numElementos = 0;
    tam = TAMANHO;
}

int Vetor::obtemTamanho(){
    return numElementos;
}

void Vetor::insereNoFinal(int elemento){
    if(numElementos == TAMANHO)
    dobraVetor();
    v[numElementos] = elemento;

    numElementos++;
}

int Vetor::posicaoDe(int elemento){
    for(int i=0; i<numElementos; i++){
        if(v[i] == elemento){
            return i;
        }
    }
    return -1;
}

void Vetor::alteraEm(int posicao, int novoValor){
    if (v[posicao] != NULL)
    v[posicao] = novoValor;

    else if(posicao >= numElementos || posicao < 0)
    cout<<"\nPosicao errada\n";
}

int Vetor::elementoEm(int posicao){
    if(posicao >= numElementos || posicao < 0)
    return -1;

    else
        return v[posicao];
}

void Vetor::reverte(){
    int *aux = new int[numElementos];
    int aux2=numElementos-1;
    for(int i=0, j=numElementos-1; i<numElementos; i++, j--){
        aux[j] = v[i];
    }
    for(int i=0; i<numElementos; i++){
        v[i] = aux[i];
    }
}

void Vetor::imprime(){
    for(int i=0; i<numElementos; i++){
        cout<<"Posicao "<< i << ": " <<v[i]<<"\n";
    }
}

void Vetor::dobraVetor(){
    int *temp = new int[numElementos];
    for(int i=0; i<numElementos; i++){
        temp[i] = v[i];
    }
    tam*=2;
    v = new int[tam];
    for(int i=0; i<tam; i++){
        v[i] = 0;
    }

    for(int i=0; i<numElementos; i++){
        v[i] = temp[i];
    }

    delete temp;
}