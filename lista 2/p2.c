// A PUC possui regras muito claras sobre a aprovação e reprovação de alunos. Suponha que umadisciplina possua o seguinte processo de avaliação:• Total de aulas do semestre.• Total de faltas do semestre.
//     • Nota de exercícios e trabalhos (25 pontos).
//     • Notas de avaliações (3 provas de 25 pontos cada).
//     • Nota de reavaliação (25 pontos).
// Para saber se um aluno foi aprovado ele tem que obedecer aosseguintes requisitos:
//     1. O aluno deve obter pelo menos 75% de frequência.
//     2. A nota final do semestre deve ser superior ou igual a 60 pontos.
//     3. Caso a notafinal seja inferior a 60 pontos, o aluno fará uma reavaliação, que deverá substituira menor nota entre as avaliações.
// Desenvolva um algoritmo que, dados o Código da disciplina, total de aulas no semestre, total defaltas no semestre, nota de exercícios e trabalhos, notas das três avaliações e a nota da reavaliação(se houver),
// determine se aluno foi aprovado ou reprovado.

#include <stdio.h>

int main()
{
    //Input de dados
    int totalAS, totalFS;
    double aulasAssitidas, frequencia, notaET, notaAV1, notaAV2, notaAV3, notaRAV, notaTotal;

    printf("Insira o numero total de aulas e numero de aulas perdidas: ");

    // Calculo frequencia - 1
    scanf("%d %d", &totalAS, &totalFS);
    aulasAssitidas = totalAS - totalFS;
    frequencia = aulasAssitidas * 100 / totalAS;

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

    if (notaTotal < 60)
    {
        printf("Insira a nota da reavaliacao: ");
        scanf("%lf", &notaRAV);
        if (notaRAV >= notaAV1 && notaRAV < notaAV2 && notaRAV < notaAV3)
        {
            notaTotal -= notaAV1 + notaRAV;
        }
        else if (notaRAV < notaAV1 && notaRAV >= notaAV2 && notaRAV < notaAV3)
        {
            notaTotal -= notaAV2 + notaRAV;
        }
        else if (notaRAV < notaAV1 && notaRAV < notaAV2 && notaRAV >= notaAV3)
        {
            notaTotal -= notaAV3 + notaRAV;
        }
        else
        {
        }
    }
    else
    {
    }

    //Output de dados
    if (notaTotal >= 70 && frequencia >= 75)
    {
        printf("Aluno aprovado!!");
    }
    else
    {
        printf("Aluno nao aprovado!!");
    }

    return 0;
}