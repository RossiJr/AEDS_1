#include <stdio.h>

int main(){

    int totalAS, totalFS;
    double aulasAssitidas, frequencia, notaET, notaAV1, notaAV2, notaAV3, notaRAV, notaTotal;

    printf("Insira o numero total de aulas e numero de aulas perdidas: ");

    // Calculo frequencia - 1
    scanf("%d %d", &totalAS, &totalFS);
    aulasAssitidas = totalAS - totalFS;
    frequencia = aulasAssitidas*100/totalAS;

    printf("Agora, insira a nota de exercicios e trabalhos: ");
    scanf("%lf", &notaET);
    notaTotal += notaET;

   // Calculo nota av
    printf("Agora, insira as tres notas das avaliacoes: ");    
        scanf("%lf", &notaAV1);
        notaTotal += notaAV1;
        scanf("%lf", &notaAV2);
        notaTotal += notaAV2;
        scanf("%lf", &notaAV3);
        notaTotal += notaAV3;

    if (notaTotal<60){
        printf("Insira a nota da reavaliacao: ");
        scanf("%lf", &notaRAV);
        if (notaRAV>=notaAV1 && notaRAV<notaAV2 && notaRAV<notaAV3){
        notaTotal -= notaAV1 + notaRAV;
        }
        else if (notaRAV<notaAV1 && notaRAV>=notaAV2 && notaRAV<notaAV3){
        notaTotal -= notaAV2 + notaRAV;
        }
        else if (notaRAV<notaAV1 && notaRAV<notaAV2 && notaRAV>=notaAV3){
        notaTotal -= notaAV3 + notaRAV;
        }
        else{
        }
    }
    else{
    }

    if(notaTotal>=70 && frequencia>=75){
        printf("Aluno aprovado!!");
    }
    else {
        printf("Aluno nao aprovado!!");
    }

    return 0;
}