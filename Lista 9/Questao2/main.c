#include <stdio.h>
#include <stdlib.h>

void main(){
  int numAlunos, nota = 0, numNotas, aprovado = 0, porcentagem = 0;
  const int flag = -1;
  char exec;

  printf("\nCalculadora da nota da turma");

  do{

    do{
      printf("\nHá quantos alunos na sala (Para sair digite -1): ");
      fflush(stdin);
      scanf("\n%d", &numAlunos);
      if(numAlunos == 0 || numAlunos < flag) printf("\nVocê digitou algo errado!");
    }while (numAlunos < 0 && numAlunos != flag);

    if(numAlunos != flag){
      for(int i = 0; i < numAlunos; i++){
          do{
            printf("\nDigite a nota do aluno: ");
            fflush(stdin);
            scanf("\n%d", &nota);
            if(nota == flag) break;
            if(nota < flag || nota > 100) printf("\nVoce digitou algo de errado!");
          }while(nota < flag || nota > 100);//fim do while

          if(nota == flag) break;
          if(nota >= 60) aprovado++;
        }//fim do for
      }//fim if


    porcentagem = (float)aprovado / (float)numAlunos * 100;

    printf("\nNumero de alunos: %d\nPorcentagem de alunos aprovados: %d%%\nPorcentagem de alunos reprovados: %d%%", numAlunos, porcentagem, 100 - porcentagem);

    do{
      printf("\nDeseja usar o programa novamente? (s/n):");
      fflush(stdin);
      scanf("\n%c", &exec);
      if(exec != 's' && exec != 'n') printf("\nVoce digitou algo de errado!");
    }while(exec != 's' && exec != 'n'); //fim do while
  }while(exec == 's');//fim do while principal

  printf("\nObrigado por usar meu programa.\n");
}

/*
Considere uma turma com um número indeterminado de alunos.
Para cada aluno, ler a sua nota final, sabendo terem sido distribuídos cem pontos.
A nota mínima para aprovação é igual a sessenta pontos.
Calcular e escrever a nota média dos alunos aprovados e a nota média dos alunos reprovados.
A leitura das notas deverá se repetir até que o valor -1 seja lido, indicando o término da turma.
• Rejeitar a leitura de valores inválidos.
*/
