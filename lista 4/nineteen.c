/* 19. Deseja-se fazer um levantamento a respeito da ausência de alunos à primeira prova de Fundamentos de Computação para cada uma 
das 14 turmas existentes. Para cada turma, é fornecido um conjunto de valores, sendo que os dois primeiros valores do 
conjunto correspondem à identificação da turma (A, ou B, ou C, ...) e ao número de alunos matriculados, e os demais valores 
deste conjunto contêm o número de matrícula do aluno e a letra A ou P para o caso de o aluno estar ausente ou presente, respectivamente.
Faça um algoritmo que, para cada turma, calcule a porcentagem de ausência e escreva a identificação da turma e a porcentagem calculada;
determine e escreva quantas turmas tiveram porcentagem de ausência superior a 5%. */

#include <stdio.h>

int main(){
int id[14], alunos, matricula, contador2=0, i;
float porcA[14], contador[14];
char estado;

for (i=1;i<=14;i++){
    contador[i]=0;
    printf("Insira o codigo da turma, o numero de alunos matriculados e o codigo de matricula: ");
    scanf("%d %d %d", &id[i], &alunos, &matricula);

    for (int j=1;j<=alunos;j++){
        printf("Insira se o aluno %d esta ausente ou presente (A/P): ", j);
        scanf("%s", &estado);
            if(estado == 'A')                                   //conta qts estao ausentes
                contador[i]++;
}
porcA[i]=(contador[i]/alunos)*100;                              //faz a porcentagem dos ausentes
if(porcA[i]>5)
contador2++;                                                    //conta quantas tem a porcentagem maior que 5
}

for(i=1;i<=14;i++){
    printf("A turma %d, cujo codigo e %d, obteve %.1f%% de faltas.\n", i, id[i], porcA[i]);
}
if(contador2 == 0)
printf("Nenhuma turma teve a porcentagem de falta acima de 5%%");
else if(contador2 == 1)
printf("Uma turma teve a porcentagem de falta acima de 5%%");
else if(contador2>1)
printf("%d tiveram a porcentagem de falta acima de 5%%", contador2);

return 0;
}
