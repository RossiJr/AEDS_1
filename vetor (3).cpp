#include <cstdlib>
#include <iostream>
#include <ctime>
#include "vetor.h"
Vetor::Vetor() { 
    v = new int [TAMANHO]; 
    for (int i=0; i <TAMANHO; i++)
    v[i]=0;
    
    numElementos = 0 ;
    tam = TAMANHO;
}
int Vetor::obtemTamanho() 
{
    return numElementos; 
    
}
void Vetor::insereNoFinal(int novoElemento) 
{
    if (numElementos == tam)
    dobraVetor();
     v[numElementos] = novoElemento;
     numElementos++;
    
   
}
int Vetor::posicaoDe (int elemento) 
{ 
    for (int i=0; i <numElementos; i++)
        if(elemento == v[i])
            return i;
            return -1;
}
void Vetor::alteraEm (int pos, int novoValor) 
{ 
    if((pos>=0) && (pos< numElementos))
    v[pos] = novoValor;
    else
    cout<< "\nPosicao invalida\n";
}
// nao existe
int Vetor::elementoDe (int pos) 
{  return 0; }
int Vetor::elementoEm (int pos) 
{ 
       if((pos>=0) && (pos< numElementos))
           return v[pos];
        else
            cout<< "\nPosicao invalida\n";
            
    return -1;
}
void Vetor::reverte() 
{ 
    int *temp = new int [numElementos];

    int j=0;
    for ( int i = (numElementos - 1); i>=0; i--){
    temp[j] = v[i];
        j++;
    }
     for ( int i = 0; i<numElementos; i++)
    v[i] = temp[i];
    
    delete temp;
}
void Vetor::imprime() 
{
  for ( int i =0; i<numElementos; i++)  
  cout<< v[i]<< " ";
};
void Vetor:: dobraVetor()
{//realocar memoria do vetor
    int *temp = new int [numElementos];

    for ( int i = 0; i< numElementos; i++){
    temp[i] = v[i];
    }
    //dobra tamanho do vetor
    tam*=2;
    
    v = new int [tam];
    //zera todas as posicoes
    for (int i=0; i <tam; i++)
    v[i]=0;
    // realiza a copia dnv
    for ( int i = 0; i< numElementos; i++)
    v[i] = temp[i];
    
    delete temp;
    
}

int Vetor::getTamanhoVetor()
{
    return tam;
}
int Vetor:: remove(int elemento)
{int i=0, qnt;
    if(elemento == v[i]){
        qnt++;
    }
     for (i = 0; i < numElementos; i++ )
    {
            numElementos-= 1;
            tam -=1;
           
            while (i < numElementos)
            {
                v[i] = v[i + 1];
                i++;
            };
          
        }
}

 

