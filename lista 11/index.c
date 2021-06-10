#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int posMed = 0;


/*** Structs utilizadas durante o codigo ***/
typedef struct{                                                                                 //Objeto - Paciente
    int codPaciente;
    char nome[50];
    char endereco[100];
    char telefone[12];
} Paciente;
typedef struct{                                                                                 //Objeto - Medico
    int codMed;
    char nome[50];
    char telefone[12];
} Medico;
typedef struct{                                                                                 //Objeto - Consultas
    int numConsul;
    int diaDaSemana;
    char hora[5];
    int consul_codMed;
    int consul_codPaciente;
} Consultas;
/**** X ****/


/****Funcoes de Teste ****/
int identCOD(int **tabela, int codMed, int qtdMedicos){                                         //Identifica a posicao do codigo do medico na tabela
    for(int i=0; i<qtdMedicos; i++){
        if(tabela[0][i] == codMed)
        return i;
    }

    return -1;
}
int testeSemana(int **tabela, int dia, int codigo){                                             //Funcao que retorna uma flag para dia da semana de acordo com disposicao de consultas para o medico no dia -> 1 - Valido  |  0 - Invalido
    if(tabela[dia][codigo] == 1 || tabela[dia][codigo] == 0){
    return 1;
    }
    else{
    return 0;
    }
}
int testeCodRepetido(int *codigos, int posicao, int qtd){                                       //Funcao para teste de codigo de paciente ou medico repetido
    for(int i=0; i<qtd; i++){                                   //percorre o vetor de codigos testando os codigos para ver se ha um igual
        if(i!=posicao){                                         //desconsidera a posicao do codigo testante no vetor -> Nao considera ele mesmo como um codigo repetido
            if(codigos[posicao] == codigos[i]){
                return 0;
            }
        }
    }
    return 1;
}
int diaValido(){                                                                                //teste para dia da semana valido  
    int dia, flag = 1;
    do{
        if(flag == 1)
        printf("\nInsira um dia da semana:\nSegunda-Feira: 1\t\tQuinta-Feira: 4\nTerca-Feira: 2\t\t\tSexta-Feira: 5\nQuarta-Feira: 3\n");
        else
        printf("Dia invalido, insira outro: ");
        
        scanf("%d", &dia);

        if(dia<1 || dia>5)                          //contagem no programa e de 1 a 5, inclusive
        flag = 0;
    }while(dia<1 || dia>5);
    return dia;
}
/**** X ****/


/**** Funcoes de Cadastro ****/
void cadastroPaciente(Paciente *pac, int *codigos, int posicao, int qtd){                       //Funcao para cadastro de pacientes
    int flag = 1;


    /**** Cadastro de pacientes ****/
        // .-- teste para id codigo repetido --. //
        printf("\nInsira o codigo do paciente: ");
    do{
        if(flag == 0)
        printf("\nCodigo ja utilizado, insira outro: ");
        scanf("%d", &(*pac).codPaciente);
        codigos[posicao] = (*pac).codPaciente;
        flag = testeCodRepetido(codigos, posicao, qtd);
    }while(flag == 0);
        //.-- x --. //

    printf("Agora, insira o nome do paciente: ");
    setbuf(stdin, NULL);
    fgets((*pac).nome, sizeof((*pac).nome), stdin);
    printf("Insira o endereco: ");
    setbuf(stdin, NULL);
    fgets((*pac).endereco, sizeof((*pac).endereco), stdin);
    printf("Por ultima, insira o telefone do paciente (apenas numeros): ");
    setbuf(stdin, NULL);
    scanf("%s", &(*pac).telefone);
    /**** X ****/
    

    /**** Tratamento de strings para exluir o caractere "enter" do final ****/
    int aux;
    
    aux = strlen((*pac).nome);
    (*pac).nome[aux-1] = (int)0;
    
    aux = strlen((*pac).endereco);
    (*pac).endereco[aux-1] = (int)0;
    
    aux = strlen((*pac).telefone);
    (*pac).telefone[aux-1] = (int)0;
    /**** X ****/
}
void cadastroMedico(Medico *med, int *codigos, int posicao, int qtd, int **tabela){             //Funcao para cadastro de medicos
    int flag = 1;


    /**** Cadastro de Medicos ****/
    printf("\nInsira o codigo do medico: ");
    
    // .-- Teste para codigo repetido --. //
    do{
        if(flag == 0)
        printf("Codigo ja utilizado, insira outro: ");
        scanf("%d", &(*med).codMed);
        codigos[posicao] = (*med).codMed;
        flag = testeCodRepetido(codigos, posicao, qtd);
    }while(flag == 0);
    // .-- X --. //
    tabela[0][posMed] = codigos[posicao];
    ++posMed;

    setbuf(stdin, NULL);
    printf("Insira o nome do medico: ");
    setbuf(stdin, NULL);
    fgets((*med).nome, sizeof((*med).nome), stdin);
    printf("Insira o telefone do medico: ");
    setbuf(stdin, NULL);
    scanf("%s", &(*med).telefone);
    setbuf(stdin, NULL);
    /**** X ****/


    /**** Tratamento de strings para exluir o caractere "enter" do final ****/
    int aux;
    
    aux = strlen((*med).nome);
    (*med).nome[aux-1] = (int)0;
    
    aux = strlen((*med).telefone);
    (*med).telefone[aux-1] = (int)0;
    /**** X ****/
}
void cadastroConsulta(Consultas *consul, int **tabela, int qtd){                                //Funcao para cadastro de consultas
    int flag1 = 0, flag2 = 0, aux;          //flag1(teste para codigo) | flag2(teste para dia da semana) | aux(facilitador de legibilidade)==consul.diaDaSemana
    int codigo;                             //codigo do medico


    /***** Cadastro da consulta *****/
    printf("\nInsira o numero da consulta: ");
    scanf("%d", &(*consul).numConsul);
    printf("Insira o codigo do medico: ");
    scanf("%d", &(*consul).consul_codMed);
    do{
        // Teste para codigo correto //
        flag1 = 0;
        flag2 = 0;
        if(identCOD(tabela, (*consul).consul_codMed, qtd) == -1)
        flag1 = 0;
        else{
            flag1 = 1;
            codigo = identCOD(tabela, (*consul).consul_codMed, qtd);
        }

        if(flag1 == 0){
            printf("Codigo invalido, insira outro: ");
            scanf("%d", &(*consul).consul_codMed);
        }
        // X //

        printf("Insira o dia da semana:\nSegunda-Feira: 1\t\tQuinta-Feira: 4\nTerca-Feira: 2\t\t\tSexta-Feira: 5\nQuarta-Feira: 3\n");
        scanf("%d", &(*consul).diaDaSemana);
        aux = (*consul).diaDaSemana;

        // Teste para dia da semana válido //
        if ((testeSemana(tabela, aux, codigo) == 0) || (aux<1 || aux>5)){
            flag2 = 0;
            printf("Dia da semana invalido!\n");
        }
        else{
            flag2 = 1;
        }
        // X //

        // Teste para marcação da consulta (codigo correto && dia correto) //
        if(flag2 == 1 && flag1 == 1)
        tabela[aux][codigo]++;
        // X //
    }while(flag1 == 0 || flag2 == 0);
    printf("Agora, insira o codigo do paciente: ");
    scanf("%d", &(*consul).consul_codPaciente);
    printf("Por ultimo, insira a hora da consulta: ");
    setbuf(stdin, NULL);
    scanf("%s", &(*consul).hora);
    /***** X *****/
}
/**** X ****/


/**** Funcoes de exibicao ****/
void medicoDia(Medico *med, int **tabela, int qtdMedico){                                       //Abre um menu para visualizacao de quantos pacientes o medico vai atender em determinado dia                                     
    /**** Menu(2) de selecao de medico - Sera impresso a quantidade de consultas que o medico tera em determinado dia ****/
    int opcMed = -1, diaSemana = -1;
    do{
        printf("Selecione o nome do medico de acordo com a numeracao:\n");
        for (int i=0; i<qtdMedico; i++){
            printf("%d - %s\n", i+1, med[i].nome);
        }
        printf("0 - Sair desta aba\n");
        do{
            scanf("%d", &opcMed);
            if(opcMed < 0 || opcMed>qtdMedico)                                  //teste para opcao valido
                printf("Opcao invalida, insira outra: ");
        }while(opcMed < 0 || opcMed>qtdMedico);

        if(opcMed != 0){
            printf("\nAgora insira o dia da semana que deseja consultar:\nSegunda-Feira: 1\t\tQuinta-Feira: 4\nTerca-Feira: 2\t\t\tSexta-Feira: 5\nQuarta-Feira: 3\n");
            do{
                scanf("%d", &diaSemana);
                if(diaSemana<=0 || diaSemana>5)                                 //teste para dia valido
                    printf("Dia da semana invalido, insira outro: ");
            }while(diaSemana<=0 || diaSemana>5);
            printf("\nO medico, com codigo %d, cujo nome e %s, tem %d consultas agendada(as) para este dia!\n", med[opcMed-1].codMed, med[opcMed-1].nome, tabela[diaSemana][opcMed-1]);
        }
    }while(opcMed!=0);                                                          //teste para acao de sair do menu
    /**** X ****/
}
void identificadorDia(int dia){                                                                 //Imprime o dia da semana em formato string correspondente ao numero passado como parametro
    switch (dia){
    case 1:
    printf("segunda feira, ");
    break;
    
    case 2:
    printf("terca feira, ");
    break;
    
    case 3:
    printf("quarta feira, ");
    break;
    
    case 4:
    printf("quinta feira, ");
    break;
    
    case 5:
    printf("sexta feira, ");
    break;
    
    default:
        break;
    }
}
void diaConsul(int **tabela, Medico *med, int qtdMedico, int dia){                              //Funcao para informar quantos pacientes serao atendidos pelos medicos em determinado dia
    printf("\nNa ");
    identificadorDia(dia);
    printf("os seguintes medicos atenderao o seguinte numero de pacientes: \n");
    for(int i=0; i<qtdMedico; i++){
        printf("%s - %d\n", med[i].nome, tabela[dia][i]);
    }
}
/**** X ****/


/**** Ferramentas usadas durante o codigo ****/
void holding(){                                                                                 //funcao para exibir na tela o "Aperte qualquer botao para prosseguir..." funcional
    printf("\nAperte qualquer botao para prosseguir...");
    getch();
}
/**** X ****/

int main(){
    int linhasMatriz = 6, diaSemana;

    printf("Insira a quantidade de pacientes a serem cadastrados: ");
    int qtdPacientes; scanf("%d", &qtdPacientes);
    printf("Insira quantos medicos serao cadastrados: ");
    int qtdMedicos; scanf("%d", &qtdMedicos);
    printf("Insira quantas consultas serao cadastradas: ");
    int qtdConsul; scanf("%d", &qtdConsul);
    

    /**** Alocacao dinamica da quantidade de Pacientes, Medicos e Consultas desejados ****/
    Paciente *teste1 = (Paciente *)calloc(qtdPacientes, (sizeof(Paciente)));
        // alocacao dinamica para armazenar codigos dos pacientes a serem comparados //
        int *codigosPac = (int *)calloc(qtdPacientes, (sizeof(int)));

    Medico *teste2 = (Medico *)calloc(qtdMedicos, (sizeof(Medico)));
        // alocacao dinamica para armazenar codigos dos medicos //
        int *codigosMed = (int *)calloc(qtdMedicos, (sizeof(int)));

    Consultas *teste3 = (Consultas *)calloc(qtdConsul, (sizeof(Consultas)));
        // matriz para cadastro de consultas/dia medico //
        int **consultasDias = (int **)calloc(linhasMatriz, (sizeof(int *)));
        for(int i=0; i<linhasMatriz; i++){
            consultasDias[i] = (int *)calloc(qtdMedicos, (sizeof(int *)));
        }
    /**** X ****/


    /**** Estrutura para cadastro ****/
    system("cls");
    for (int i=0; i<qtdPacientes; i++){
        cadastroPaciente(&teste1[i], codigosPac, i, qtdPacientes);
    }
    system("cls");
    for (int i=0; i<qtdMedicos; i++){
        cadastroMedico(&teste2[i], codigosMed, i, qtdMedicos, consultasDias);
    }
    system("cls");
    for (int i=0; i<qtdConsul; i++){
        cadastroConsulta(&teste3[i], consultasDias, qtdMedicos);
    }
    /**** X ****/


    system("cls");

    /**** Menu(1) de acoes possiveis acoes ****/
    int opcaoMenu1;
    do{
    printf("Menu: \n1 - Consultas medico/dia\n2 - Consultas por dia\n0 - Sair\n");
    scanf("%d", &opcaoMenu1);
    switch (opcaoMenu1){
        case 1:
        medicoDia(teste2, consultasDias, qtdMedicos);
        holding();
        break;
        
        case 2:
        diaSemana = diaValido();
        diaConsul(consultasDias, teste2, qtdMedicos, diaSemana);
        holding();
        break;
        
        case 0:
        printf("\nSaindo do programa...");
        holding();
        return 0;
        break;

        default:
        printf("\nOpcao invalida, insira outra: ");
        holding();
        break;
        }
        system("cls");
    }while(opcaoMenu1!=0);
    /**** X ****/

    return 0;
}