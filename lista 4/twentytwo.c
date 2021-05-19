/* 22.  Um  posto  de  combustíveis  deseja  determinar  qual  de  seus  produtos  tem  a  preferência  de  seus clientes.  
Façaum  algoritmo  para  ler  o  tipo  de  combustível  abastecido  (codificado  da  seguinte  forma: 
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser  solicitado  um  
novo  código  (até  que  seja  válido).  Ao  ser informado  o  código  do  combustível,  o  seu respectivo nome deve ser impresso na 
tela. O programa será encerrado quando o código informado for o número  4  escrevendo  então  a  mensagem  :  
"MUITO  OBRIGADO"  e  a  quantidade  de  clientes  que abasteceram cada tipo de combustível. */

#include <stdio.h>

int main(){
    printf("Insira o tipo de combustivel abastecido de acordo com o seguinte menu, ou encerre o programa com o valor 4:\n1. Alcool\n2. Gasolina\n3. Diesel\n4. Fim\n");
    int opc, contA=0, contG=0, contD=0; scanf("%d", &opc);
    while(opc!=4){
        switch(opc){
            case 1:
            printf("Alcool\n");                                 //opcao alcool e seu contador
            contA++;
            break;

            case 2:
            printf("Gasolina\n");                               //opcao gasolina e seu contador   
            contG++;
            break;

            case 3:
            printf("Diesel\n");                                 //opcao diesel e seu contador
            contD++;
            break;

            default:
            printf("Valor invalido, insira outro valor!\n");    //valor invalido
            break;
        }
        printf("Tipo de combustivel: ");
        scanf("%d", &opc);
    }

    printf("Muito obrigado!!\n");
    printf("Alcool -> %d\nGasolina -> %d\nDiesel -> %d", contA, contG, contD);


    return 0;
}