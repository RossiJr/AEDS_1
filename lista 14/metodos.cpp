#include "classes.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Ingresso::Ingresso(float valorIngresso){                                                                                                                    //Construtor do objeto Ingresso
    this->valorIngresso = valorIngresso; 
}
void Ingresso::imprimeValor(){                                                                                                                              //Método para imprimir valor do objeto Ingresso
    cout<<"\nValor do ingresso: "<<this->valorIngresso<<"\n";
}
void Ingresso::aumentarValorIngressoInicial(float valor){                                                                                                   //Aumenta o valor do ingresso
    this->valorIngresso += valor;
}

IngressoVIP::IngressoVIP(float valorAdicional, float valorIngresso) : Ingresso(valorIngresso){                                                              //Construtor do Objeto IngressoVip
    this->aumentarValorIngressoInicial(valorAdicional);
}

IngressoNormal::IngressoNormal(float valorIngresso) : Ingresso(valorIngresso){}                                                                             //Construtor do objeto Ingresso Normal

CamaroteInferior::CamaroteInferior(char *localizacao, float valorAdicional, float valorIngresso) : IngressoVIP(valorAdicional, valorIngresso){              //Construtor do Objeto Camarote Inferior
    this->localizacaoInferior = localizacao;
}
void CamaroteInferior::imprimirLocalizacaoInferior(){                                                                                                       //Imprime a localizacao do camarote inferior - Poderia ser apenas no IngressoVip para gastar menos linhas de codigo
    cout<<"\nLocalizacao: "<<this->localizacaoInferior<<"\n";
}

CamaroteSuperior::CamaroteSuperior(char *localizacao, float valorAdicional, float valorIngresso) : IngressoVIP(valorAdicional, valorIngresso){              //Construtor do Objeto Camarote Superior
    this->localizacaoSuperior = localizacao;
}
void CamaroteSuperior::imprimirLocalizacaoSuperior(){                                                                                                       //Imprime a localizacao do camarote superior - Poderia ser apenas no IngressoVip para gastar menos linhas de codigo
    cout<<"\nLocalizacao: "<<this->localizacaoSuperior<<"\n";
}