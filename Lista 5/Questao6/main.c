#include <stdlib.h>
#include <stdio.h>

int main(){
    float prova1, prova2, notaAluno;

    printf("Programa para checagem de notas de alunos");
    printf("\nDigite a nota do aluno na primeira prova: ");
    scanf("%f", &prova1);
    printf("\nDigite a nota do aluno na segunda prova: ");
    scanf("%f", &prova2);

    notaAluno = prova1 + prova2;

    if (prova1 > 50 || prova2 > 50){
        printf("Cada prova vale 50 pontos!\n");
        return 0;
    }
    else if(prova1 < 0 || prova2 < 0){
        printf("Nao ha como ter uma nota inferior a 0 nas provas!\n");
        return 0;
    }

    if (notaAluno > 60){
        printf("Aluno aprovado!");
    }
    else if(notaAluno >= 40 && notaAluno < 60){
        printf("Aluno em reavaliacao!");
    }
    else{
        printf("Aluno reprovado!");
    }
    printf("\n");
}