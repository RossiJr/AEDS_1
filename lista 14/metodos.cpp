#include "classes.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Ingresso::Ingresso(float valorIngresso){
    this->valorIngresso = valorIngresso; 
}
void Ingresso::imprimeValor(){
    cout<<"\nValor do ingresso: "<<this->valorIngresso<<"\n";
}
void Ingresso::aumentarValorIngressoInicial(float valor){
    this->valorIngresso += valor;
}

IngressoVIP::IngressoVIP(float valorAdicional, float valorIngresso) : Ingresso(valorIngresso){
    this->aumentarValorIngressoInicial(valorAdicional);
}

IngressoNormal::IngressoNormal(float valorIngresso) : Ingresso(valorIngresso){}

CamaroteInferior::CamaroteInferior(char *localizacao, float valorAdicional, float valorIngresso) : IngressoVIP(valorAdicional, valorIngresso){
    this->localizacaoInferior = localizacao;
}
void CamaroteInferior::imprimirLocalizacaoInferior(){
    cout<<"\nLocalizacao: "<<this->localizacaoInferior<<"\n";
}

CamaroteSuperior::CamaroteSuperior(char *localizacao, float valorAdicional, float valorIngresso) : IngressoVIP(valorAdicional, valorIngresso){
    this->localizacaoSuperior = localizacao;
}
void CamaroteSuperior::imprimirLocalizacaoSuperior(){
    cout<<"\nLocalizacao: "<<this->localizacaoSuperior<<"\n";
}