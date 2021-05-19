#include <stdio.h>
#include <math.h>

void soma(float a, float b){
float soma;
soma = a+b;
printf("O resultado e: %.2f", soma);
}

void subtracao(float a, float b){
float subtracao = a - b;
    printf("O resultado e: %.2f", subtracao);
}

void multiplicacao(float a, float b){
    float multiplicacao=a*b;
    printf("O resultado e: %.2f", multiplicacao);
}

void divisao(float a, float b){
    float divisao=a/b;
    printf("O resultado e: %.2f", divisao);
}

void raiz(float a){
float raizQ=sqrt(a);
    printf("O resultado e: %.2f", raizQ);
}

void potencia(float a, int b){
float potencia=pow(a, b);
    printf("O resultado e: %.2f", potencia);
}

void seno(float a){
float seno=sin(a);
    printf("O resultado e: %.2f", seno);
}

void coss(float a){
float cosseno=cos(a);
    printf("O resultado e: %.2f", cosseno);
}
void hipotenusa(float a, float b){
float hipotenusa=0;
float aux1=0, aux2=0, aux3=0;
aux1 = pow(a, 2);
aux2 = pow(b, 2);
aux1+=aux2;
hipotenusa = sqrt(aux1);
    printf("O resultado e: %.2f", hipotenusa);
}

void tang(float a){
float tangente = tan(a);
    printf("O resultado e: %.2f", tangente);
}

void logaritmo(float logaritmando){
float logaritmo=log10(logaritmando);
    printf("O resultado e: %.2f", logaritmando);
}

void areaRetangulo(float a, float b){
    a*=b;
    printf("O resultado e: %.2f", a);
}

void areaCircunferencia(float raio){
float PI = 3.14;
float area = PI * pow(raio, 2);
    printf("O resultado e: %.2f", area);
}

float fatorial(int n){
if(n==0 || n==1){
    printf("O resultado e: 1");
}
for(int i=n-1;i>0;i--){
    n*=i;
}
    printf("O resultado e: %d", n);
}

int main(){
int opc, c=0;
float a=0, b=0;
do{
    printf("\n\nInsira qual operacao deseja realizar: \n1- Soma\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n5- Raiz Quadrada\n6- Potenciacao\n7- Seno\n8- Cosseno\n9- Hipotenusa de um triangulo retangulo\n10- Tangente\n11- Logaritmo\n12- Area de um retangulo\n13- Area de uma circunferencia\n14- Fatorial\n0- Sair\nDigite aqui sua opcao: ");
    scanf("%d", &opc);

    switch(opc){
        case 1:
        printf("Digite os dois valores a serem somados: ");
        scanf("%f %f", &a, &b);
        soma(a, b);
        break;

        case 2:
        printf("Digite os dois valores a serem subtraidos (primeiroValor - segundoValor): ");
        scanf("%f %f", &a, &b);
        subtracao(a, b);
        break;

        case 3:
        printf("Digite os dois valores a serem multiplicados: ");
        scanf("%f %f", &a, &b);
        multiplicacao(a, b);
        break;

        case 4:
        printf("Digite os dois valores a serem divididos (primeiroValor / segundoValor): ");
        scanf("%f %f", &a, &b);
        divisao(a, b);
        break;

        case 5:
        printf("Digite o valor que deseja extrair a raiz quadrada: ");
        scanf("%f", &a);
        raiz(a);
        break;

        case 6:
        printf("Digite o valor A que deseja elevar a B: ");
        scanf("%f %d", &a, &c);
        potencia(a, b);
        break;

        case 7:
        printf("Digite o valor que deseja extrair o seno: ");
        scanf("%f", &a);
        seno(a);
        break;

        case 8:
        printf("Digite o valor que deseja extrair o cosseno: ");
        scanf("%f", &a);
        coss(a);
        break;

        case 9:
        printf("Digite os valores do cateto oposto e do cateto adjacente: ");
        scanf("%f %f", &a, &b);
        hipotenusa(a, b);
        break;
    
        case 10:
        printf("Digite o valor que deseja extrair tangente: ");
        scanf("%f", &a);
        tang(a);
        break;

        case 11:
        printf("Digite o valor que deseja extrair o logaritmo: ");
        scanf("%f", &a);
        logaritmo(a);
        break;

        case 12:
        printf("Digite o valor da base e da altura: ");
        scanf("%f %f", &a, &b);
        areaRetangulo(a, b);
        break;

        case 13:
        printf("Digite o valor do raio: ");
        scanf("%f", &a);
        areaCircunferencia(a);
        break;

        case 14:
        printf("Digite o valor que deseja extrair o fatorial: ");
        scanf("%f", &a);
        fatorial(a);
        break;

        case 0:
        printf("Encerrando o programa, obrigado!");
        break;

        default:
        printf("Opcao invalida, insira outro valor");
        break;
    }
} while(opc!=0);
    return 0;
}