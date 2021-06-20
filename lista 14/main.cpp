#include "classes.h"
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

void menu(int id){                  //Funcao para imprimir os menus
    switch(id){
        case 1:
        cout<<"\n1- Ingresso normal\n2- Ingresso VIP\n0- Sair do menu\n";
        break;
        case 2:
        cout<<"\n1- Camarote superior\n2- Camarote inferior\n0- Sair do menu\n";
        break;
    }
    cout<<"Opcao: ";
}

int main(){
    //Declaracao de variaveis
    float precoIngresso = 150;
    float const valorExtra = 50;

    int opcao1, opcao2;
    char localizacaoSuperior[50] = "lado 1\0";
    char localizacaoInferior[50] = "lado 2\0";
    system("cls");

    //inicio do menu 1
    cout<<"Insira qual tipo de ingresso deseja: ";
    menu(1);
    do{                             //testes para valores validos
    cin>>opcao1;
        if(opcao1 == 1){
            IngressoNormal *ingNormal = new IngressoNormal(precoIngresso);
            ingNormal->imprimeValor();
        }
        else if(opcao1 == 0)
            cout<<"Saindo do programa...\n";
        else if(opcao1 == 2){
            //inicio menu 2
            cout<<"\nAgora insira o tipo de camarote:";
            menu(2);
            do{                     //testes para valores validos
                cin>>opcao2;
                if(opcao2 == 1){
                    CamaroteSuperior *camSup = new CamaroteSuperior(localizacaoSuperior, valorExtra, precoIngresso);
                    camSup->imprimeValor();
                    camSup->imprimirLocalizacaoSuperior();
                }
                else if(opcao2 == 2){
                    CamaroteInferior *camInf = new CamaroteInferior(localizacaoInferior, valorExtra, precoIngresso);
                    camInf->imprimeValor();
                    camInf->imprimirLocalizacaoInferior();
                }
                else if(opcao2 == 0){                   //encerramento do programa
                    cout<<"\nSaindo do programa...";
                    opcao1 = 0;                         //valor atribuido ao do-while do menu 1 para encerrar o programa
                }
                else
                    cout<<"\nOpcao invalida, insira outra...\n";
            }while(opcao2<0 || opcao2>2);
        }
        else
            cout<<"\nOpcao invalida, insira outra...\n";
    }while(opcao1<0 || opcao1>2);

    return 0;
}