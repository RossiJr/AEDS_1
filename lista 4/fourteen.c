/* 14.  Ler  o  número  de  alunos  existentes  em  uma  turma,  
ler  as  notas  destes  alunos,  e  calcular  a  média aritmética destas notas. */

#include <stdio.h>

int main(){                                                 //inicio
printf("Insira o numero de alunos da turma: ");
int alunos, i; scanf("%d", &alunos);
float nota, soma=0;
printf("Agora insira as notas destes alunos: \n");

for(i=1;i<=alunos;i++){                                     //laco de repeticao
    printf("Nota do aluno %d: ", i);
    scanf("%f", &nota);
    soma += nota;                                           //calculo da media: 'l15 a l17'
}
soma /= alunos;                                             

printf("A media dessas notas sao: %.1f", soma);

    return 0;                                               //fim
}