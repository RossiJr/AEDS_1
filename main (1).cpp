/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include "vetor.h"
using namespace std;
int testaTamanhoVetor(Vetor *v)
{
    return v->getTamanhoVetor();
}
int main (int argc, char *argv[])
{
 Vetor *v = new Vetor();
 v->insereNoFinal(10);
 v->insereNoFinal(8);
 v->insereNoFinal(16);
 v->insereNoFinal(7);
 v->insereNoFinal(5);
 v->insereNoFinal(13);
 v->insereNoFinal(25);
 v->insereNoFinal(27);
 v->insereNoFinal(15);
 v->insereNoFinal(18);
 v->imprime();
 cout<< "\n Tamanho do vetor:"<<v-> obtemTamanho();
 cout<<"\n";
 
int pos = v->posicaoDe(8);

if(pos != -1)
cout<<"\nPosicao:"<< pos << "\n";
else
cout<<"\nElemento nao encontrado:"<< pos << "\n";


 v->alteraEm(3,19);
 v->alteraEm(8,21);

 int i;
 for (i = 0; i < v->obtemTamanho(); i++)
 cout << "\nElemento na posicao " <<i <<":" <<v->elementoEm(i);
  cout<<"\n";
  
 v->imprime();
   cout <<" \n";
 v->reverte();
 
 v->imprime();
 cout<< "\n Tamanho do vetor:"<< testaTamanhoVetor(v);
 cout<<"\n";
 v-> insereNoFinal(25);
 cout<< "\n Tamanho do vetor:"<< testaTamanhoVetor(v);
 cout<<"\n";
  v->imprime();
 v->remove(16);
  v->remove(25);
  cout<<"\n";
v->imprime();
cout<< "\n Tamanho do vetor:"<< testaTamanhoVetor(v);
 cout<<"\n";
}