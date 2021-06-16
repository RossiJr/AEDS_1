#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include "vetor.h"
using namespace std;

int main(){
    
    Vetor *v = new Vetor();

    v->insereNoFinal(11);
    v->insereNoFinal(10);
    v->insereNoFinal(8);
    v->insereNoFinal(16);
    v->insereNoFinal(7);
    v->insereNoFinal(5);
    v->insereNoFinal(13);

    v->imprime();
    cout<<"\n";

    v->alteraEm(3, 19);

    v-> imprime();
    cout<<"\n\n";

    for(int i=0; i<v->obtemTamanho(); i++){
        cout<<"Posicao em "<<i<<": "<<v->elementoEm(i)<<"\n";
    }
    v->reverte();
    cout<<"\n";
    v->imprime();
    
    v->insereNoFinal(5);
    v->insereNoFinal(6);
    v->insereNoFinal(7);
    v->insereNoFinal(8);
    v->insereNoFinal(9);
    cout<<"\n"<<v->obtemTamanho()<<"\n\n";
    v->imprime();
}