#include "classes.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    char teste1[20];
    char teste2[20];
    cin>>teste1;
    cin>>teste2;
    cout<<teste1 << " | "<<teste2;
    Ingresso *ing = new Ingresso(500);
    ing->imprimeValor();

    IngressoVIP *ing2 = new IngressoVIP(100, 500);
    ing2->imprimeValor();

    IngressoNormal *ing3 = new IngressoNormal(200);
    ing3->imprimeValor();

    CamaroteInferior *cam1 = new CamaroteInferior(teste1, 200, 300);
    cam1->imprimeValor();
    cam1->imprimirLocalizacaoInferior();

    CamaroteSuperior *cam2 = new CamaroteSuperior(teste2, 100, 700);
    cam2->imprimeValor();
    cam2->imprimirLocalizacaoSuperior();


    return 0;
}